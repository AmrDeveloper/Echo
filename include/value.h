//
// Created by AmrDeveloper on 7/26/2019.
//
#ifndef ECHO_VALUE_H
#define ECHO_VALUE_H

#include "common.h"

typedef double Value;

/**
 * The constant pool
 */
typedef struct {
    int capacity;
    int count;
    Value *values;
} ValueArray;

void initValueArray(ValueArray *array);

void freeValueArray(ValueArray *array);

void writeValueArray(ValueArray *array, Value value);

void printValue(Value value);

#endif
