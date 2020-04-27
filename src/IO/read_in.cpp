#include"read_in.h"

std::string Terminal_read::getTerminalText(){
    BeginTextPrompt();
    readIn();
    return blockTEXT;
}

void Terminal_read::readIn(){
    std::cin >> blockTEXT;
}

void Terminal_read::BeginTextPrompt(){
    std::string txt = "Enter block of text:";
    std::cout << txt << std::endl;
}

void Terminal_read::resultTextPrompt(){
    std::string txt = "Formatted text:";
    std::cout << txt << std::endl;
}