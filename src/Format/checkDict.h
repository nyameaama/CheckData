#ifndef DICT
#define DICT

#include<string>
#include"../IO/writeOut.h"
#include<fstream>

class checkDict {
    private:
        
    public:
        uint8_t searchFile();

        bool linearSearch(std::string x,std::string y);

};

#endif