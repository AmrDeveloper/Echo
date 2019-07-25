//
// Created by AmrDeveloper on 7/26/2019.
//

#ifndef ECHO_DEBUG_H
#define ECHO_DEBUG_H

#include "chunk.h"

/**
 * disassemble all of the instructions in the entire chunk
 */
void disassembleChunk(Chunk* chunk, const char* name);

/**
 * disassembles a single instruction
 * returns the offset of the next instruction
 */
int disassembleInstruction(Chunk* chunk, int offset);

#endif
