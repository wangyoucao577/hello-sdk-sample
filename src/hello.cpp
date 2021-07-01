#include "hello.h"

#include "Poco/MD5Engine.h"
#include "Poco/DigestStream.h"

#include <iostream>

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

    Poco::MD5Engine md5;
    Poco::DigestOutputStream ds(md5);
    ds << "abcdefghijklmnopqrstuvwxyz";
    ds.close();
    std::cout << Poco::DigestEngine::digestToHex(md5.digest()) << std::endl;
}
