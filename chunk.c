//
// Created by AmrDeveloper on 7/26/2019.
//

#include "include/chunk.h"
#include "include/memory.h"

void initChunk(Chunk* chunk){
    chunk->count = 0;
    chunk->capacity = 0;
    chunk->code = NULL;
}

void writeChunk(Chunk* chunk, uint8_t byte){
    if(chunk->capacity < chunk->count + 1){
        int oldCapacity = chunk->capacity;
        chunk->capacity = GROW_CAPACITY(oldCapacity);
        chunk->code = GROW_ARRAY(chunk->code, uint8_t,oldCapacity, chunk->capacity);
    }
    chunk->code[chunk->count] = byte;
    chunk->count++;
}