//
// Created by AmrDeveloper on 7/26/2019.
//

#ifndef ECHO_MEMORY_H
#define ECHO_MEMORY_H

#define GROW_CAPACITY(capacity) \
     ((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(oldArray, type, oldCount, newCount) \
    (type*)reallocate(oldArray, sizeof(type) * (oldCount), \
        sizeof(type) * (newCount))

#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(type) * (oldCount), 0)

void* reallocate(void* oldArray, size_t oldSize, size_t newSize);

#endif
