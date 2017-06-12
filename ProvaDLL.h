#ifndef __PROVADLL__
#define __PROVADLL__

#include <string>

class Prova
{
private:
    std::string encryptDecrypt(std::string toEncrypt);
public:
    Prova();
    std::string getEmail();
};

#endif
