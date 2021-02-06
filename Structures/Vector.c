#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "Vector.h"

Vector *create(const int *sizePtr) {
    int size;
    if (sizePtr == NULL) {
        size = 1;
    } else {
        size = *sizePtr;
    }
    void **start = malloc(size * sizeof(void *));
    Vector *newVector = malloc(sizeof(Vector));

    newVector->data = start;
    newVector->length = 0;
    newVector->capacity = size;

    return newVector;
}

void append(Vector *vector, void *elementPtr) {
    void **data = vector->data;
    if (vector->capacity == 0) {
        vector->data = realloc(data, 2 * vector->length * sizeof(void *));
        vector->capacity = vector->length;
    }

    data[vector->length++] = elementPtr;
    vector->capacity--;
}

void *pop(Vector *vector) {
    void **data = vector->data;
    void *element = data[vector->length - 1];

    data[vector->length--] = NULL;
    vector->capacity++;

    return element;
}


