#ifndef GESTIONBASE_H
#define GESTIONBASE_H
#include <iostream>
#include <string>


class GestionBase
{
    public:
        bool checkNameBase(std::string name);
        std::string crearBase(std::string name);
        void cargarBase(std::string name);
        int checkMenuBase(std::string answer);
        void escribirBase(std::string name , std::string text);
    };


#endif // GESTIONBASE_H
