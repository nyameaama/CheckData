#ifndef FORMAT
#define FORMAT

#include<string>
#include<ctype.h>
#include<stdlib.h>

class formatData {
    public:
        std::string FormatData(std::string x);

        uint8_t doubleSpaceCheck(std::string *content);

};

#endif