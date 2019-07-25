//
// Created by AmrDeveloper on 7/26/2019.
//

#ifndef ECHO_DEBUG_H
#define ECHO_DEBUG_H

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);

int disassembleInstruction(Chunk* chunk, int offset);

#endif
