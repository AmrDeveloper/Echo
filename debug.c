//
// Created by AmrDeveloper on 7/26/2019.
//

#include <stdio.h>
#include "include/debug.h"

/**
 * disassemble all of the instructions in the entire chunk
 */
void disassembleChunk(Chunk* chunk, const char* name){
    printf("== %s ==\n", name);
    for(int offset = 0; offset < chunk->count ;){
        offset = disassembleInstruction(chunk, offset);
    }
}

/**
 * Print current Instruction then return index of next one
 */
static int simpleInstruction(const char* name, int offset) {
    printf("%s\n", name);
    return offset + 1;
}

/**
 * disassembles a single instruction
 * returns the offset of the next instruction
 */
int disassembleInstruction(Chunk* chunk, int offset){
    printf("%04d ", offset);
    uint8_t instruction = chunk->code[offset];
    switch(instruction){
        case OP_RETURN:{
            return simpleInstruction("OP_RETURN",offset);
        }
        default:{
            printf("Unknown opcode %d\n", instruction);
            return offset + 1;
        }
    }
}

