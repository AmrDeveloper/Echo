//
// Created by AmrDeveloper on 7/26/2019.
//

#ifndef ECHO_CHUNK_H
#define ECHO_CHUNK_H

#include "common.h"

//each instruction has a one-byte operation code (OP)
//This enum represent type of operation code
typedef enum {
    OP_RETURN,
} OpCode;

//A dynamic array of instructions
typedef struct {
    uint8_t* code;
    int count;
    int capacity;
} Chunk;

void initChunk(Chunk* chunk);

void freeChunk(Chunk* chunk);

void writeChunk(Chunk* chunk, uint8_t byte);

#endif
