#include "VistaBase.h"
#include "CtrBase.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
    VistaBase vb;
    CtrBase cb;
    bool  a;
    string answer="";
do{
    answer = vb.menu();///LLamada al menu de bases

    switch (cb.checkMenuBase(answer))
    {
        case 1:
            answer = vb.nombreBase();

            if(cb.checkNameBase(answer))
            {


            }else
            {
            ///TODO:lanzar menu interno de base


            }
            break;
        case 2:
            answer = vb.nombreBase();
            break;

        case 3: answer= "adios";
            break;
        default: cout<<"Por favor elige un numero valido"<<endl;
    }




}while(answer != "adios");
    return 0;
}
