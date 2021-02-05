#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "Vector.h"

void *create(const Type type, const int *sizePtr) {
    int count = 0;
    if (sizePtr != NULL) {
        count = *sizePtr;
    }
    int size = 0;
    switch (type) {
        case Integer:
            size = 4;
        case Float:
            size = 4;
        case Double:
            size = 8;
        case Char:
            size = 1;
        case Bool:
            size = 1;
    }
    if (size == 0) {
        return NULL;
    } else {
        void *newVector = malloc(size);
        return newVector;
    }
}
