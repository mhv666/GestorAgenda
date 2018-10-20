#ifndef CONSOLE_H
#define CONSOLE_H
#include <string>
#include "Interface.h"
class Console: public Interface
{

    public:
    std::string menu();
    std::string nombreBase();
    std::string menuBase();
    void menuBaseRegistro(std::string *name, std::string *surname, std::string *telephone );
    string queBuscar();


};


#endif // CONSOLE_H
