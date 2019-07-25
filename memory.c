//
// Created by AmrDeveloper on 7/26/2019.
//

#include <stdlib.h>

#include "include/common.h"
#include "include/memory.h"


void* reallocate(void* oldArray, size_t oldSize, size_t newSize){
    if(newSize == 0){
        free(oldArray);
        return NULL;
    }
    return realloc(oldArray,newSize);
}