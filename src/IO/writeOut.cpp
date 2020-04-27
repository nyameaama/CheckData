#include"writeOut.h"

void writeOut::createProgramDir(){
    
}

uint8_t writeOut::file_open(std::string filePath,uint8_t stat){
    if(stat == 1){
        file.open(filePath,std::ios::out);
        if(file.is_open()){
            return 1;
        }else{
            abort();
        }
    }else if(stat == 0){
        file.open(filePath,std::ios::in);
        if(file.is_open()){
            return 1;
        }else{
            abort();
        }
    }

}

std::string writeOut::file_Read(){
    std::string fileName;
    std::string content;
    file_open(fileName,IN);
    while(true){
        file >> content;
        if(file.eof()){
            break;
        }
    }
    return content;
}

uint8_t writeOut::fileWrite(){

}