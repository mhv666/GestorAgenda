#include "Registro.h"
#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
using namespace std;
char m_name[30];
char m_surname[30];
char m_telefono[20];

string Registro::fields(string name, string surname, string telefono)
{
    int validation{0};
    string reg="";


    if(strlen(name.c_str())<=30)
    {

        strcpy(m_name,name.c_str());
        validation++;
        reg += "n/";
        reg += m_name;
    }
    if(strlen(surname.c_str())<=30)
    {

         strcpy(m_surname,surname.c_str());
         validation++;
         reg += "a/";
         reg += m_surname;
    }
    if(strlen(telefono.c_str())<=20)
    {

        strcpy(m_telefono,telefono.c_str());
        validation++;


        reg += "/!";
        reg += m_telefono;


    }

    if(validation == 3){
        return reg;
    }else{
    return "salida erronea del registro";
    }

}
