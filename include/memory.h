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

void* reallocate(void* oldArray, size_t oldSize, size_t newSize);

#endif
