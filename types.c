#include "types.h"


int *toIntRef(void *ref) {
    return (int *) ref;
}

char *toCharRef(void *ref) {
    return (char *) ref;
}

double *toDoubleRef(void *ref) {
    return (double *) ref;
}

float *toFloatRef(void *ref) {
    return (float *) ref;
}
