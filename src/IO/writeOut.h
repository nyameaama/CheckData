#ifndef WRITE_OUT
#define WRITE_OUT

#include<fstream>
#include"../Pref/getOS.h"
#include<unistd.h>

#define OS OperatingS

class writeOut {
    const char *path = "home/user/documents";
    public:
        void createProgramDir();

        uint8_t file_open(std::string flePath);

        uint8_t file_Read();

        

};

#endif

