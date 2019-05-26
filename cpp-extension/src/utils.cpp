
#include "../headers/utils.h"

#include <iostream>

int __internalAdder( const int * r1, const int * r2 ){
    std::cout << "C++ output" << std::endl;
    return (*r1) + (*r2);
}