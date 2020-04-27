#include"writeOut.h"

void writeOut::createProgramDir(){

}

uint8_t writeOut::file_open(std::string fileName){
    std::string content;
    std::ofstream file;
    file.open(fileName,std::ios::out);
    if(file.is_open()){
        return 1;
    }else{
        return 0;
    }

}