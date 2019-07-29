//
// Created by AmrDeveloper on 7/26/2019.
//

#ifndef ECHO_ECHO_VM_H
#define ECHO_ECHO_VM_H

#include "../include/chunk.h"
#include "../include/value.h"
#include "../include/table.h"

#define STACK_MAX_SIZE 256

/**
 * struct to represent the Virtual Machine
 */
typedef struct {
    Chunk *chunk;
    uint8_t* ip;
    Value stack[STACK_MAX_SIZE];
    Value *stackTop;
    Table strings;
    Obj* objects;
} VM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;

void initVM();

void freeVM();

void push(Value value);

Value pop();

InterpretResult interpret(const char* source);

extern VM vm;

#endif
