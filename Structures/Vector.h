#include "../types.h"

#ifndef CODINGINTERVIEWUNIVERSITY_VECTOR_H
#define CODINGINTERVIEWUNIVERSITY_VECTOR_H

struct Vector {
    int size;
    void *start;
    Type type;
};

void *create(Type type, const int *sizePtr);

void append(void *element);

void *pop(int index);

void insert(void *element);

void *get(int index);

void remove(int index);

void set(int index, void *value);

#endif //CODINGINTERVIEWUNIVERSITY_VECTOR_H
