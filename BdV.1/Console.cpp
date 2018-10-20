#include "Console.h"
#include <iostream>
#include <string>
///#include <cctype>
using namespace std;
    string m_answer="a";
    string Console::menu()
{

    for (int i=0;i<17;i++)
    {
         if(i == 0 || i == 16)
        {

            cout<<" ******************************************************** "<<endl;
        }else
        {
            if(i==2) cout<<" **            Bienvenido al gestor de Bases           ** "<<endl;
            if(i==4) cout<<" **           1 -->Crear/cargar Base                   ** "<<endl;
            if(i==6) cout<<" **           2 -->Salir                               ** "<<endl;



            cout<<" **                                                    ** "<<endl;
        }

    }
    cin>>m_answer;

    return m_answer;

}
string Console::nombreBase()
{

    for (int i=0;i<17;i++)
    {
         if(i == 0 || i == 16)
         {

            cout<<" ******************************************************** "<<endl;
         }
         else
         {
        if(i==6) cout<<" **           Por favor escriba un nombre:             ** "<<endl;
        if(i==8) cout<<" **                                                    ** "<<endl;


            cout<<" **                                                    ** "<<endl;
         }

    }
    cin>>m_answer;
return m_answer;

}
string Console::menuBase()
{
    for (int i=0;i<17;i++)
    {
        if(i == 0 || i == 16)
        {

            cout<<" ******************************************************** "<<endl;
        }else
        {
            if(i==2) cout<<" **           Bienvenido a la base:                   ** "<<endl;
            if(i==4) cout<<" **           1 -->Add registro                       ** "<<endl;
            if(i==6) cout<<" **           2 -->Buscar registro                    ** "<<endl;
            if(i==8) cout<<" **           3 -->Listar registros                   ** "<<endl;
            if(i==10) cout<<" **          4 -->SALIR                              ** "<<endl;



            cout<<" **                                                    ** "<<endl;
        }
    }
    cin>>m_answer;
return m_answer;
}
string Console::queBuscar()
{
     for (int i=0;i<17;i++)
    {
         if(i == 0 || i == 16)
        {

            cout<<" ******************************************************** "<<endl;
        }else
        {
            if(i==2) cout<<" **           Escriba por que parametro buscar:           ** "<<endl;
            if(i==4) cout<<" **           1 -->Nombre                                 ** "<<endl;
            if(i==6) cout<<" **           2 -->Apellido                               ** "<<endl;
            if(i==6) cout<<" **           3 -->Telefono                               ** "<<endl;


            cout<<" **                                                    ** "<<endl;
        }

    }
     cin>>m_answer;
return m_answer;
}
void Console::menuBaseRegistro(string *name, string *surname, string *telephone )
{


                 cout<<" **           Introduzca un nombre:                  ** "<<endl;
                 cin>>*name;
                 cout<<" **           Introduzca los apellidos:              ** "<<endl;
                 cin>>*surname;
                 cout<<" **           Introduzca un telefono:                ** "<<endl;
                 cin>>*telephone;





}



