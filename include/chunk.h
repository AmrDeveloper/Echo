//
// Created by AmrDeveloper on 7/26/2019.
//

#ifndef ECHO_CHUNK_H
#define ECHO_CHUNK_H

#include "common.h"
#include "value.h"

//each instruction has a one-byte operation code (OP)
//This enum represent type of operation code
typedef enum {
    OP_CONSTANT,
    OP_NEGATE,
    OP_ADD,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE,
    OP_RETURN
} OpCode;

//A dynamic array of instructions
typedef struct {
    int count;
    int capacity;
    uint8_t* code;
    int* lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);

void freeChunk(Chunk* chunk);

void writeChunk(Chunk* chunk, uint8_t byte, int line);

int addConstant(Chunk* chunk, Value value);

#endif
