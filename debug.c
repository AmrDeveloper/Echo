//
// Created by AmrDeveloper on 7/26/2019.
//

#include <stdio.h>
#include "include/debug.h"
#include "include/value.h"

/**
 * disassemble all of the instructions in the entire chunk
 */
void disassembleChunk(Chunk *chunk, const char *name) {
    printf("== %s ==\n", name);
    for (int offset = 0; offset < chunk->count;) {
        offset = disassembleInstruction(chunk, offset);
    }
}

/**
 * Print current Instruction then return index of next one
 */
static int simpleInstruction(const char *name, int offset) {
    printf("%s\n", name);
    return offset + 1;
}

static int constantInstruction(const char* name, Chunk* chunk,
                               int offset) {
    uint8_t constant = chunk->code[offset + 1];
    printf("%-16s %4d '", name, constant);
    printValue(chunk->constants.values[constant]);
    printf("'\n");
    return offset + 2;
}

/**
 * disassembles a single instruction
 * returns the offset of the next instruction
 */
int disassembleInstruction(Chunk *chunk, int offset) {
    printf("%04d ", offset);
    /**
     * if this instruction is in new line print that line
     * else print (   |)
     */
    if (offset > 0 && chunk->lines[offset] == chunk->lines[offset - 1]) {
        printf("   | ");
    } else {
        printf("%4d ", chunk->lines[offset]);
    }
    uint8_t instruction = chunk->code[offset];
    switch (instruction) {
        case OP_CONSTANT: {
            return constantInstruction("OP_CONSTANT", chunk, offset);
        }
        case OP_NEGATE:{
            return simpleInstruction("OP_NEGATE", offset);
        }
        case OP_RETURN: {
            return simpleInstruction("OP_RETURN", offset);
        }
        default: {
            printf("Unknown opcode %d\n", instruction);
            return offset + 1;
        }
    }
}

