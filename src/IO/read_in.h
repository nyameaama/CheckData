#ifndef READ_IN
#define READ_IN

#include<string>
#include<iostream>

class Terminal_read {
    public:
    std::string blockTEXT;

    public:
        //Function to display beginnig prompt text
        void BeginTextPrompt();

        //Function to display beginnig prompt text
        void resultTextPrompt();

        //Function to get text using cin
        void readIn();

    public:
        //Function to get input data
        std::string getTerminalText(); 

};

#endif