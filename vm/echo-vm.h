//
// Created by AmrDeveloper on 7/26/2019.
//

#ifndef ECHO_ECHO_VM_H
#define ECHO_ECHO_VM_H

#include "../include/value.h"
#include "../include/table.h"
#include "../include/object.h"

#define FRAMES_MAX 64
#define STACK_MAX (FRAMES_MAX * UINT8_COUNT)

/**
 * A CallFrame represents a single ongoing function call
 */
typedef struct {
    ObjClosure* closure;
    uint8_t* ip;
    Value* slots;
} CallFrame;

/**
 * struct to represent the Virtual Machine
 */
typedef struct {
    CallFrame frames[FRAMES_MAX];
    int frameCount;
    Value stack[STACK_MAX];
    Value *stackTop;
    Table globals;
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
