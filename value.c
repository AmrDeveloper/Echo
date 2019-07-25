//
// Created by AmrDeveloper on 7/26/2019.
//

#include "include/value.h"
#include "include/memory.h"

void initValueArray(ValueArray *array){
    array->count = 0;
    array->capacity = 0;
    array->values = NULL;
}

void freeValueArray(ValueArray *array){
    FREE_ARRAY(uint8_t, array->values, array->capacity);
    initValueArray(array);
}

void writeValueArray(ValueArray *array, Value value){
    if(array->capacity < array->count + 1){
        int oldCapacity = array->capacity;
        array->capacity = GROW_CAPACITY(oldCapacity);
        array->values = GROW_ARRAY(array,Value,array->count,array->capacity);
    }
    array->values[array->count] = value;
    array->count++;
}

