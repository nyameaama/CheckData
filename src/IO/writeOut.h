#ifndef WRITE_OUT
#define WRITE_OUT

#include<fstream>
#include"../Pref/getOS.h"
#include<unistd.h>

#define OS OperatingS
#define IN 0
#define OUT 1

class writeOut {
    const char *path = "home/user/documents";
    std::fstream file;
    public:
        //Constructor
        writeOut();

        //Destructor
        ~writeOut();
        
        //Function to create folder for program resources
        void createProgramDir();

        //Function to open file
        uint8_t file_open(std::string flePath,uint8_t stat);

        //Function to read from file
        std::string file_Read();
    
        //Function to write to file
        uint8_t fileWrite(std::string x);

};

#endif

