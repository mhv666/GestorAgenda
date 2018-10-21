#ifndef CONSOLE_H
#define CONSOLE_H
#include <string>
#include <vector>
#include "Interface.h"
class Console: public Interface
{

    public:
    std::string menu();
    std::string nombreBase();
    std::string menuBase();
    std::string queBuscar();
    std::string askName();
    std::string askSurname();
    std::string askTelephone();
    void error();
    void menuBaseRegistro(std::string *name, std::string *surname, std::string *telephone );
    void seeVector(std::vector<std::string> base);
};


#endif // CONSOLE_H
