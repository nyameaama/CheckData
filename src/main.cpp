#include"IO/writeOut.h"
#include"IO/read_in.h"
#include"Pref/getOS.h"
#include<iostream>

int main(){
    //Declare objects
    writeOut get;
    Terminal_read tx;
    //Get block of text
    tx.BeginTextPrompt();
    std::string Ttext = tx.getTerminalText();
    system("clear");
    std::cout << "Processing";
    get.fileWrite(Ttext);
    get.file_Read();
    system("clear");
    

}
