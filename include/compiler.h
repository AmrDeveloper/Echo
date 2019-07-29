//
// Created by AmrDeveloper on 7/26/2019.
//

#ifndef ECHO_COMPILER_H
#define ECHO_COMPILER_H

#include "chunk.h"
#include "object.h"
#include "../vm/echo-vm.h"

bool compile(const char* source,Chunk* stack);

#endif
