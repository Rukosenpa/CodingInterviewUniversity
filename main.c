#include <stdio.h>
#include <stdlib.h>
#include "Structures/Vector.h"

int main() {
    int vectorSize = 10;
    Vector *vector = create(&vectorSize);

    for (int i = 0; i < vectorSize; i++) {
        long *valPtr = malloc(sizeof(long));
        *valPtr = random() % 4096;
        append(vector, valPtr);
    }

    for (int i = 0; i < vector->length; i++) {
        long *valPtr = vector->data[i];
        printf("%ld ", *valPtr);
    }

    pop(vector);

    printf("\n");
    for (int i = 0; i < vector->length; i++) {
        long *valPtr = vector->data[i];
        printf("%ld ", *valPtr);
    }

    pop(vector);

    printf("\n");
    for (int i = 0; i < vector->length; i++) {
        long *valPtr = vector->data[i];
        printf("%ld ", *valPtr);
    }

    pop(vector);

    printf("\n");
    for (int i = 0; i < vector->length; i++) {
        long *valPtr = vector->data[i];
        printf("%ld ", *valPtr);
    }
}
