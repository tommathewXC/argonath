
#include "../headers/utils.h"

#include <iostream>
#include <unordered_map>

int __internalAdder( const int * r1, const int * r2 ){
    std::cout << "C++ output" << std::endl;
    std::unordered_map<std::string, std::string> kv;
    kv["itema"] = "ayo this is an unorderd map";
    kv["itemb"] = "damn it feels good to be a gangsta";
    for( auto kvp: kv ){
        std::cout << "Key: " << kvp.first << ", Value: " << kvp.second << std::endl;
    }

    return (*r1) + (*r2);
}