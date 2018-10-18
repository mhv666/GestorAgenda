#include "CtrBase.h"
#include <iostream>
#include <sys/stat.h>
#include <unistd.h>
#include <string>
#include <fstream>

using namespace std;
bool CtrBase::checkNameBase(string name)
{
    if (FILE *file = fopen(name.c_str(), "r")) {
        fclose(file);
        ///TODO: implementar la funcion que cargue la bbdd

        return true;
    } else {
        CtrBase::crearBase(name);
        return false;
    }

}
void CtrBase::crearBase(string name)
{
    ofstream database;
    database.open(name+".txt", ios::ate | ios::app);
    database.close();
}
void CtrBase::cargarBase(string name)
{
    ofstream database;
    database.open(name, ios::ate | ios::app);

}


 int CtrBase::checkMenuBase(string answer){

        if(answer == "1")
        {
            return 1;
        }
        else if(answer == "2")
        {
            return 2;
        }
        else if(answer == "3")
        {
            return 3;
        }
        else{
            return -1;
        }





 }

