#include"checkDict.h"

uint8_t checkDict::searchFile(){
    writeOut get;
    std::ifstream file;
    std::string content;
    file.open("words.txt",std::ios::out);
        if(file.is_open()){
            return 1;
        }else{
            abort();
        }
    while(true){
        file >> content;
        if(file.eof()){
            break;
        }
    }
    file.close();
   

}

bool checkDict::linearSearch(std::string x,std::string y){
    for(int i = 0; i < strlen(x.c_str);i++){
		if(strcmp(x[i].c_str,y.c_str)){
			return 1;
    	}
	}	
	return 0; 
}