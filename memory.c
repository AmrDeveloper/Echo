//
// Created by AmrDeveloper on 7/26/2019.
//

#include <stdlib.h>

#include "include/common.h"
#include "include/memory.h"

/**
* Dynamic Memory Management function
* oldSize     newSize                  Operation
* 0           Non_zero                 Allocate new Block
* Non_zero    0                        Free Allocation
* Non_zero    Smaller than oldSize     Shrink existing allocation
* Non_zero    Larger Than oldSize      Grow existing allocation
*/
void* reallocate(void* oldArray, size_t oldSize, size_t newSize){
    if(newSize == 0){
        free(oldArray);
        return NULL;
    }
    return realloc(oldArray,newSize);
}