#ifndef WRITE_OUT
#define WRITE_OUT

#include<fstream>

class writeOut {
    const char *path = "home/user/documents";
    public:
        void createProgramDir();

        uint8_t file_open(std::string fileName);

};

#endif

