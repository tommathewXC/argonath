
#include "../headers/utils.h"
#include <stdio.h>

int __internalAdder( const int * r1, const int * r2 ){
    printf("C output\n");
    return (*r1) + (*r2);
}