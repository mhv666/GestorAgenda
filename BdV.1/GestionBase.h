#ifndef GESTIONBASE_H
#define GESTIONBASE_H
#include <iostream>
#include <string>
#include <vector>


class GestionBase
{
    public:
        std::string crearBase(std::string name);
        std::vector<std::string> listarBase(std::string name);
        std::vector<std::string> buscar (std::string name, std::string database,int n);
        bool checkNameBase(std::string name);
        int checkMenuBase(std::string answer);
        void escribirBase(std::string name , std::string text);
        void cargarBase(std::string name);

    };


#endif // GESTIONBASE_H
