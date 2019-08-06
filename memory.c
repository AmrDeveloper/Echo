//
// Created by AmrDeveloper on 7/26/2019.
//

#include <stdlib.h>

#include "include/memory.h"
#include "include/value.h"
#include "include/object.h"
#include "vm/echo-vm.h"

/**
* Dynamic Memory Management function
* oldSize     newSize                  Operation
* 0           Non_zero                 Allocate new Block
* Non_zero    0                        Free Allocation
* Non_zero    Smaller than oldSize     Shrink existing allocation
* Non_zero    Larger Than oldSize      Grow existing allocation
*/
void* reallocate(void* oldArray, size_t oldSize, size_t newSize){
    if(newSize == 0){
        free(oldArray);
        return NULL;
    }
    return realloc(oldArray,newSize);
}

static void freeObject(Obj* object) {
    switch (object->type) {
        case OBJ_FUNCTION:{
            ObjFunction* function = (ObjFunction*)object;
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
            ObjString* string = (ObjString*)object;
            FREE_ARRAY(char, string->chars, string->length + 1);
            FREE(ObjString, object);
            break;
        }
    }
}

void freeObjects() {
    Obj* object = vm.objects;
    while (object != NULL) {
        Obj* next = object->next;
        freeObject(object);
        object = next;
    }
}