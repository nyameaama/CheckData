#ifndef GET_OS
#define GET_OS

#include<string>

#ifdef _WIN32
    std::string OperatingS = "win"; 

#endif

#ifdef __APPLE__
    std::string OperatingS = "app"; 

#endif

#endif