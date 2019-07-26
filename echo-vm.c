//
// Created by AmrDeveloper on 7/26/2019.
//

#include "vm/echo-vm.h"
#include "include/common.h"
#include "include/debug.h"

#include <stdio.h>

VM vm;

static void resetStack();

void initVM() {
   resetStack();
}

void freeVM() {

}

void push(Value value){
    *vm.stackTop = value;
    vm.stackTop++;
}

Value pop(){
    vm.stackTop--;
    return *vm.stackTop;
}

static void resetStack(){
   vm.stackTop = vm.stack;
}

static InterpretResult run() {
#define READ_BYTE() (*vm.ip++)
#define READ_CONSTANT() (vm.chunk->constants.values[READ_BYTE()])

    while (true) {
#ifdef DEBUG_TRACE_EXECUTION
        printf("          ");
        for (Value* slot = vm.stack; slot < vm.stackTop; slot++) {
            printf("[ ");
            printValue(*slot);
            printf(" ]");
        }
        printf("\n");
        disassembleInstruction(vm.chunk, (int)(vm.ip - vm.chunk->code));
#endif
        uint8_t instruction;
        switch (instruction = READ_BYTE()) {
            case OP_CONSTANT:{
                Value constant  = READ_CONSTANT();
                push(constant);
                break;
            }

            case OP_NEGATE:{
                Value constant = -pop();
                push(constant);
                break;
            }

            case OP_RETURN: {
                Value constant = pop();
                printValue(constant);
                printf("\n");
                return INTERPRET_OK;
            }
        }
    }
#undef READ_BYTE
#undef READ_CONSTANT
}

InterpretResult interpret(Chunk *chunk) {
    vm.chunk = chunk;
    vm.ip = vm.chunk->code;
    return run();
}