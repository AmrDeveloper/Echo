//
// Created by AmrDeveloper on 7/26/2019.
//

#ifndef ECHO_MEMORY_H
#define ECHO_MEMORY_H

#define GROW_CAPACITY(capacity) \
     ((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(oldArray, type, oldCount, count) \
    (type*)reallocate(oldArray, sizeof(type) * (oldCount), \
        sizeof(type) * (count))

#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(type) * (oldCount), 0)

/**
* Dynamic Memory Management function
* oldSize     newSize                  Operation
* 0           Non_zero                 Allocate new Block
* Non_zero    0                        Free Allocation
* Non_zero    Smaller than oldSize     Shrink existing allocation
* Non_zero    Larger Than oldSize      Grow existing allocation
*/
void* reallocate(void* oldArray, size_t oldSize, size_t newSize);

#endif
