//
// Created by AmrDeveloper on 7/26/2019.
//

#include <stdlib.h>

#include "include/memory.h"
#include "include/value.h"
#include "include/object.h"
#include "include/compiler.h"
#include "vm/echo-vm.h"

#ifdef DEBUG_LOG_GC
#include <stdio.h>
#include "include/debug.h"
#endif

/**
* Dynamic Memory Management function
* oldSize     newSize                  Operation
* 0           Non_zero                 Allocate new Block
* Non_zero    0                        Free Allocation
* Non_zero    Smaller than oldSize     Shrink existing allocation
* Non_zero    Larger Than oldSize      Grow existing allocation
*/
void *reallocate(void *oldArray, size_t oldSize, size_t newSize) {
    if (newSize > oldSize) {
#ifdef DEBUG_STRESS_GC
        collectGarbage();
#endif
    }

    if (newSize == 0) {
        free(oldArray);
        return NULL;
    }
    return realloc(oldArray, newSize);
}

void markObject(Obj* object) {
    if (object == NULL) return;

#ifdef DEBUG_LOG_GC
    printf("%p mark ", (void*)object);
    printValue(OBJ_VAL(object));
    printf("\n");
#endif

    object->isMarked = true;
}

void markValue(Value value) {
    if (!IS_OBJ(value)) return;
    markObject(AS_OBJ(value));
}

static void freeObject(Obj *object) {
#ifdef DEBUG_LOG_GC
    printf("%p free type %d\n", (void*)object, object->type);
#endif
    switch (object->type) {
        case OBJ_CLOSURE: {
            //Free the Closure not the function itself
            //The Garbage Collector  will free in Future
            ObjClosure *closure = (ObjClosure *) object;
            FREE_ARRAY(Value, closure->upvalues, closure->upvalueCount);
            FREE(ObjClosure, closure);
            break;
        }
        case OBJ_FUNCTION: {
            ObjFunction *function = (ObjFunction *) object;
            freeChunk(&function->chunk);
            FREE(ObjFunction, object);
            //TODO : for now free name ObjString but later GC will do that
            break;
        }
        case OBJ_NATIVE: {
            FREE(ObjNative, object);
            break;
        }
        case OBJ_STRING: {
            ObjString *string = (ObjString *) object;
            FREE_ARRAY(char, string->chars, string->length + 1);
            FREE(ObjString, object);
            break;
        }
        case OBJ_UPVALUE:
            FREE(ObjUpvalue, object);
            break;
    }
}

void freeObjects() {
    Obj *object = vm.objects;
    while (object != NULL) {
        Obj *next = object->next;
        freeObject(object);
        object = next;
    }
}

static void markRoots() {
    //Marking the stack covers local variables and temporaries
    for (Value* slot = vm.stack; slot < vm.stackTop; slot++) {
        markValue(*slot);
    }

    //Mark VM Frames closure
    for (int i = 0; i < vm.frameCount; i++) {
        markObject((Obj*)vm.frames[i].closure);
    }

    //Mark Upvalue list
    for (ObjUpvalue* upvalue = vm.openUpvalues;
         upvalue != NULL;
         upvalue = upvalue->next) {
        markObject((Obj*)upvalue);
    }

    //Mark global variables
    markTable(&vm.globals);

    //Mark Compiler Roots
    markCompilerRoots();
}

void collectGarbage() {
#ifdef DEBUG_LOG_GC
    printf("-- gc begin\n");
#endif

    markRoots();

#ifdef DEBUG_LOG_GC
    printf("-- gc end\n");
#endif
}