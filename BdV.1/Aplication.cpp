#include "Aplication.h"
#include "GestionBase.h"
#include "Registro.h"
#include "Console.h"
#include <iostream>

void Aplication::run()
{
    Console terminal;
    GestionBase controler;
    Registro reg;
    std::string answer = "a";
    std::string opc = "";
    do
    {
        answer = terminal.menu();

        switch (controler.checkMenuBase(answer))
        {
            case 1:
                answer = terminal.nombreBase();
                    if(controler.checkNameBase(answer))
                    {

                    }else{
                        opc = "";
                        answer = controler.crearBase(answer);
                        opc = terminal.menuBase();

                            if(opc == "1" )
                            {
                                std::string name = "";
                                std::string surname = "";
                                std::string telephone = "";
                                terminal.menuBaseRegistro(&name,&surname,&telephone);

                                controler.cargarBase(answer);
                                std::string regis = reg.fields(name,surname,telephone);
                                controler.escribirBase(answer,regis);


                            }else if(opc == "2"){
                                opc=terminal.queBuscar();
                                    if(opc == "1"){

                                    }
                            }else if(opc == "3"){


                            }else{

                            }

                        controler.cargarBase(answer);



                    }
                break;
            case 2:

                break;
            default: std::cout<<"Por favor elige un numero valido"<<std::endl;
        }
    }while(answer != "adios" );



}
