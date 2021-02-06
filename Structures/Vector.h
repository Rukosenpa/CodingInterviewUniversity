#include "../types.h"

#ifndef CODINGINTERVIEWUNIVERSITY_VECTOR_H
#define CODINGINTERVIEWUNIVERSITY_VECTOR_H

typedef struct {
    int length;
    int capacity;
    void **data;
} Vector;

Vector *create(const int *sizePtr);

void append(Vector *vector, void *elementPtr);

void *pop(Vector *vector);

void insert(Vector *vector, void *element);

void *get(Vector *vector, int index);

//void remove(int index);

void set(Vector *vector, int index, void *value);

#endif //CODINGINTERVIEWUNIVERSITY_VECTOR_H
