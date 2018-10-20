#include "GestionBase.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
bool GestionBase::checkNameBase(string name)
{
    if (FILE *file = fopen(name.c_str(), "r")) {
        fclose(file);
        ///TODO: implementar la funcion que cargue la bbdd
        GestionBase::cargarBase(name);
        return true;
    } else {
        GestionBase::crearBase(name);

        return false;
    }


}
string GestionBase::crearBase(string name)
{
    ofstream database;
    name += ".txt";
    database.open(name, ios::ate | ios::app);
    database.close();
    return name;
}
void GestionBase::cargarBase(string name)
{
    ofstream database;
    database.open(name, ios::ate | ios::app);

}
void GestionBase::escribirBase(string name,string text)
{
    ofstream database;
    database.open(name, ios::ate | ios::app);

    database<< text <<endl;
    database.close();

}
int GestionBase::checkMenuBase(string answer){

        if(answer == "1"){
            return 1;
        }
        else if(answer == "2"){
            return 2;
        }
        else{
            return -1;
        }





 }

string GestionBase::listarBase(string name){
 ifstream base;
 string listado;
 base.open(name,ios::in)

 if(base.fail()){

 }

while(!base.eof())
 {
getline(base,listado);
 }
///TODO:listar  https://www.youtube.com/watch?v=ksnBUo-08Uw


}
