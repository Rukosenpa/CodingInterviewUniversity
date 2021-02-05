//
// Created by rukosenpa on 05/02/2021.
//

#ifndef CODINGINTERVIEWUNIVERSITY_TYPES_H
#define CODINGINTERVIEWUNIVERSITY_TYPES_H

typedef enum {
    Integer,
    Float,
    Double,
    Char
} Type;

int *toIntRef(void *ref);

float *toFloatRef(void *ref);

double *toDoubleRef(void *ref);

char *toCharRef(void *ref);

#endif //CODINGINTERVIEWUNIVERSITY_TYPES_H
