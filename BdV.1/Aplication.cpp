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
                    opc = "";
                    answer = controler.crearBase(answer);
                   do
                   {


                        opc = terminal.menuBase();
                        if(opc == "1" )
                        {
                            std::string name = "";
                            std::string surname = "";
                            std::string telephone = "";
                            std::string regis = "";

                            terminal.menuBaseRegistro(&name,&surname,&telephone);
                            controler.cargarBase(answer);
                            regis = reg.fields(name,surname,telephone);
                            controler.escribirBase(answer,regis);


                        }else if(opc == "2"){
                            opc=terminal.queBuscar();
                            if(opc == "1"){
                              std::string nombre = terminal.askName();
                               terminal.seeVector(controler.buscar(nombre,answer,1));

                            }else if (opc == "2"){
                                 std::string apellido= terminal.askSurname();
                                  terminal.seeVector(controler.buscar(apellido,answer,2));
                            }else if (opc == "3"){
                                std:: string telefono = terminal.askTelephone();
                                 terminal.seeVector( controler.buscar(telefono,answer,3));

                            }else{
                                terminal.error();
                            }

                        }else if(opc == "3"){
                               terminal.seeVector(controler.listarBase(answer));
                        }else if(opc == "4"){
                         ///to exit
                        }else{
                                terminal.error();
                        }
                    }while(opc != "4");
                    break;
                case 2:
                    answer = "adios";
                    break;
                default: terminal.error();

            }

    }while(answer != "adios" );



}
