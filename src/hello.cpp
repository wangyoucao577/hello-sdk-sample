#include <iostream>
#include "hello.h"

#ifndef HELLO_SDK_VERSION
#define HELLO_SDK_VERSION "unknown"
#endif

void hello(){
    std::cout << "hello sdk version: " << HELLO_SDK_VERSION << std::endl;

    #ifdef NDEBUG
    std::cout << "Hello World Release!" <<std::endl;
    #else
    std::cout << "Hello World Debug!" <<std::endl;
    #endif
}
