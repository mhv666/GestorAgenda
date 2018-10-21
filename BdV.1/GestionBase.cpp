#include "GestionBase.h"
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

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
void GestionBase::escribirBase(string name , string text)
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

vector<string> GestionBase::listarBase(string database){
ifstream db;
    string temp;
    string nombre = "";
    string apellidos = "";
    string telefono = "";
    vector<string> encontrados;
    db.open(database);
    if (db.is_open())
    {
        while (getline(db,temp))
        {
            nombre.append(temp,temp.find("n/")+2,temp.find("a/")-2);
            apellidos.append(temp,temp.find("a/")+2,(temp.find("t/")-temp.find("a/")-2 ) );
            telefono.append(temp,temp.find("t/")+2,temp.npos);


            encontrados.push_back("nombre: "+nombre+" "+
                                  "apellidos: "+apellidos+" "+
                                  "telefono: "+telefono);
            encontrados.push_back("--------------");

            nombre ="";
            apellidos = "";
            telefono = "";
        }
    return encontrados;
    }
    return encontrados;
}

vector<string> GestionBase::buscar(string name , string database,int n){
    ifstream db;
    string temp;
    string nombre = "";
    string apellidos = "";
    string telefono = "";
    vector<string> encontrados;
    db.open(database);


    if (db.is_open())
    {

         switch(n)
            {
                 case 1:
                      while (getline(db,temp))
                        {
                            nombre.append(temp,temp.find("n/")+2,temp.find("a/")-2);
                            apellidos.append(temp,temp.find("a/")+2,(temp.find("t/")-temp.find("a/")-2 ) );
                            telefono.append(temp,temp.find("t/")+2,temp.npos);

                            if(nombre.find(name) != string::npos  )
                            {
                                encontrados.push_back("nombre: "+nombre+" "+
                                                      "apellidos: "+apellidos+" "+
                                                      "telefono: "+telefono);
                                encontrados.push_back("--------------");

                            }
                            nombre = "";
                            apellidos = "";
                            telefono = "";

                        }

                 break;
                 case 2:
                     while (getline(db,temp))
                            {
                                nombre.append(temp,temp.find("n/")+2,temp.find("a/")-2);
                                apellidos.append(temp,temp.find("a/")+2,(temp.find("t/")-temp.find("a/")-2 ) );
                                telefono.append(temp,temp.find("t/")+2,temp.npos);

                                if(apellidos.find(name) != string::npos  )
                                {
                                    encontrados.push_back("nombre: "+nombre+" "+
                                                          "apellidos: "+apellidos+" "+
                                                          "telefono: "+telefono);
                                    encontrados.push_back("--------------");

                                }
                                nombre = "";
                                apellidos = "";
                                telefono = "";

                            }
                 break;
                 case 3:
                      while (getline(db,temp))
                            {
                                nombre.append(temp,temp.find("n/")+2,temp.find("a/")-2);
                                apellidos.append(temp,temp.find("a/")+2,(temp.find("t/")-temp.find("a/")-2 ) );
                                telefono.append(temp,temp.find("t/")+2,temp.npos);

                                if(telefono.find(name) != string::npos  )
                                {
                                    encontrados.push_back("nombre: "+nombre+" "+
                                                          "apellidos: "+apellidos+" "+
                                                          "telefono: "+telefono);
                                    encontrados.push_back("--------------");

                                }
                                nombre = "";
                                apellidos = "";
                                telefono = "";

                            }
                 break;
            }

           return encontrados;

    }
    return encontrados;
}

