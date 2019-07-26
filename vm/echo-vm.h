//
// Created by AmrDeveloper on 7/26/2019.
//

#ifndef ECHO_ECHO_VM_H
#define ECHO_ECHO_VM_H

#include "../include/chunk.h"

/**
 * struct to represent the Virtual Machine
 */
typedef struct {
    Chunk *chunk;
    uint8_t* ip;
} VM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;

void initVM();

void freeVM();

InterpretResult interpret(Chunk* chunk);
#endif
