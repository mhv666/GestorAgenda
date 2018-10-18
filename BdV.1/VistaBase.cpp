#include <iostream>
#include <string>
#include <cctype>
#include "VistaBase.h"

using namespace std;


string VistaBase::menu()
{
    string answer = "a";
    for (int i=0;i<17;i++)
    {
         if(i == 0 || i == 16)
        {

            cout<<" ******************************************************** "<<endl;
        }else
        {
            if(i==2) cout<<" **            Bienvenido al gestor de Bases           ** "<<endl;
            if(i==4) cout<<" **           1 -->Crear/cargar Base                   ** "<<endl;
            if(i==6) cout<<" **           2 -->Eliminar Base                       ** "<<endl;
            if(i==8) cout<<" **           3 -->Salir                               ** "<<endl;


            cout<<" **                                                    ** "<<endl;
        }

    /*
        if(i == 0 || i == 16)
        {

            cout<<" ******************************************************** "<<endl;
        }else
        {
            if(i==2) cout<<" **            Bienvenido al gestor de campos          ** "<<endl;
            if(i==4) cout<<" **           1 -->Crear campo                         ** "<<endl;
            if(i==6) cout<<" **           3 -->Modificar campo                     ** "<<endl;
            if(i==8) cout<<" **           2 -->Eliminar Campo                      ** "<<endl;




            cout<<" **                                                    ** "<<endl;
        }
    */


    }
    cin>>answer;

    return answer;

}

std::string VistaBase::nombreBase()
{
    std::string name ="";
    for (int i=0;i<17;i++)
    {
         if(i == 0 || i == 16)
         {

            cout<<" ******************************************************** "<<endl;
         }
         else
         {
        if(i==6) cout<<" **           Por favor escriba un nombre:             ** "<<endl;
        if(i==8) cout<<" **     Si desea cargar escriba la ruta completa       ** "<<endl;


            cout<<" **                                                    ** "<<endl;
         }

    }
    cin>>name;
return name;

}

