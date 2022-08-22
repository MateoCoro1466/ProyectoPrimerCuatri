#ifndef VOIDDOS_H_INCLUDED
#define VOIDDOS_H_INCLUDED
#include "Funciones nombre.h"
#include "Menu.h"

int dos(int puntajemax) {
    rlutil::setColor(rlutil::WHITE);
    int good;
    int conjug=0;
    int conrond=0;
    int bandera1=0;
    int ban=1;
    int maxPuntajeTurno;
    int insta;
    char n[15];
    char po[15];
    char nDos[15];
    char poDos[15];
    int x;
    int band=1;
    rlutil::cls();
        rlutil::setColor(rlutil::RED);
        cout<<"-------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout << "Ingrese el nombre del jugador 1 " << endl;
        rlutil::setColor(rlutil::RED);
        cout<<"-------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        int z = cargarPalabras(n, x);
        rlutil::cls();
        rlutil::setColor(rlutil::RED);
        cout<<"-------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout << "Nombre: ";
        mostrarPalabras(n, z);
        cout << endl;
        rlutil::setColor(rlutil::RED);
        cout<<"-------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout << "Ingrese el apellido del jugador 1 " << endl;
        int y = cargarPalabras(po, x);
        rlutil::cls();
        rlutil::locate(1,1);
        rlutil::setColor(rlutil::RED);
        cout<<"-------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout << "Nombre del jugador uno: ";
        mostrarPalabras(n, z);
        cout << " ";
        mostrarPalabras(po, y);
        cout<<endl;
        rlutil::setColor(rlutil::RED);
        cout<<"-------------------------------------"<<endl;
        rlutil::locate(1,4);
        //////////
            rlutil::cls();
            rlutil::locate(1,1);
            rlutil::setColor(rlutil::RED);
            cout<<"-------------------------------------"<<endl;
            rlutil::setColor(rlutil::WHITE);
            cout << "Ingrese el nombre del jugador 2 " << endl;
            rlutil::setColor(rlutil::RED);
            cout<<"-------------------------------------"<<endl;
            rlutil::setColor(rlutil::WHITE);
            int k = cargarPalabras(nDos, x);
            cout<<endl;

            rlutil::cls();
            rlutil::setColor(rlutil::RED);
            cout<<"-------------------------------------"<<endl;
            rlutil::setColor(rlutil::WHITE);
            cout << "Nombre: ";
            mostrarPalabras(nDos, k);
            cout<<endl;
            rlutil::setColor(rlutil::RED);
            cout<<"-------------------------------------"<<endl;
            rlutil::setColor(rlutil::WHITE);
            cout << "Ingrese el apellido del jugador 2 " << endl;
            int kilo = cargarPalabras(poDos, x);
            rlutil::setColor(rlutil::RED);
            cout<<"-------------------------------------"<<endl;
            rlutil::cls();
            rlutil::locate(1,1);
            rlutil::setColor(rlutil::RED);
            cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
            rlutil::locate(1,2);
            rlutil::setColor(rlutil::WHITE);
            cout << "Nombre del jugador uno: ";
            mostrarPalabras(n, z);
            cout << " ";

            mostrarPalabras(po, y);
            rlutil::setColor(rlutil::RED);
            cout<<"|";
            rlutil::setColor(rlutil::WHITE);
            cout << "Nombre del jugador dos: ";
            mostrarPalabras(nDos, k);
            cout << " ";
            mostrarPalabras(poDos, kilo);
            cout<<endl;
            rlutil::setColor(rlutil::RED);
             cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;

            rlutil::setColor(rlutil::RED);
             cout<<"---------------------------------"<<endl;
             rlutil::setColor(rlutil::WHITE);
            cout<<"Comineza :";
            mostrarPalabras(n, z);
            cout << " ";
            mostrarPalabras(po, y);
            cout<<endl;
            rlutil::setColor(rlutil::RED);
            cout<<"---------------------------------"<<endl;
            rlutil::setColor(rlutil::WHITE);

            rlutil::locate(1,8);
            std::cout<<"Precione una tecla para empezar ";
             mostrarPalabras(n, z);
            cout << " ";
            mostrarPalabras(po, y);
            cout<<endl;
            rlutil::anykey();
            rlutil::cls();

    //Creacion de puntaje global y cantidad de turnos
    rlutil::setColor(rlutil::RED);
    int ganancia = 0;
     ///RONDAS
    int maxi=2;
    int puntajeGlobalAnt;
    int klp;
    int plo = 0;
    int kulo = 0;
    int puntajeGlobal = 0;
    int r=0;
    int banDera = 0;

    for (klp = 0; klp <= 1; klp++) {
            int p;
conjug++;
    for (p = 1; p <= maxi; p++) {




    if (ganancia != 1) {
if (bandera1==0){
        rlutil::setColor(rlutil::RED);
          cout<<"---------------------------------"<<endl;
             rlutil::setColor(rlutil::WHITE);
            cout<<"Turno de:";
            mostrarPalabras(n, z);
            cout << " ";
            mostrarPalabras(po, y);
            cout<<endl;
            rlutil::setColor(rlutil::RED);
            cout<<"---------------------------------"<<endl;
            ban=0;
}else
{rlutil::setColor(rlutil::RED);
   cout<<"---------------------------------"<<endl;
             rlutil::setColor(rlutil::WHITE);
            cout<<"Turno de:";
            mostrarPalabras(nDos, k);
            cout << " ";
            mostrarPalabras(poDos, kilo);
            cout<<endl;
            rlutil::setColor(rlutil::RED);
            cout<<"---------------------------------"<<endl;
}
            rlutil::setColor(rlutil::WHITE);
           rlutil::setColor(rlutil::RED);
    cout<<"-------------------------------------------------------------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout << "Turno numero: " << p<<"/"<<maxi;
    rlutil::setColor(rlutil::RED);
    cout<<"|";
    rlutil::setColor(rlutil::WHITE);
    cout<<"Puntaje actual: "<<puntajeGlobal<<endl;
    rlutil::setColor(rlutil::RED);
    cout<<"-------------------------------------------------------------------------"<<endl;

 rlutil::setColor(rlutil::WHITE);
    //Instansiacion de variables
    int mesa = 0;
    int cUno = 0;
    int cDos = 0;
    int cTres = 0;
    int cCuatro = 0;
    int cCinco = 0;
    int cSeis = 0;
    int puntaje = 0;
    int B = 0;
    int ant;
    int cant = 0;
    int tiro = 0;
    int dadoCambiar;
    char seguirTirando;
    int cambio;
    int cantDados;
    bool sigoTiro = true;

    cout << endl;


    //Instanciacion de vector y mostrar vector
    int vectorNuevo[5], suma, i,vRepetidos[6];
    cargarAleatorio(vectorNuevo, 5);
    rlutil::setColor(rlutil::WHITE);
    mostrarAleatorio(vectorNuevo, 5);

    cout << endl;
    // muestra primeros dados
    int iUno;
    rlutil::setColor(rlutil::RED);
    for (iUno = 0; iUno < 5; iUno++) {


        if (vectorNuevo[iUno] == 1) {

            dado1();
        } else {
            if (vectorNuevo[iUno] == 2) {

                dado2();
            } else {
                if (vectorNuevo[iUno] == 3) {

                    dado3();
                } else {
                    if (vectorNuevo[iUno]  == 4) {

                        dado4();
                    } else {
                        if (vectorNuevo[iUno] == 5) {

                            dado5();
                        } else {
                            if (vectorNuevo[iUno] == 6) {
                                dado6();

                            }
                        }
                    }
                }
            }
        }

}

    //Cuenta numerios repetidos
    cout << endl;
    cout << endl;
    for(i=1;i<=6;i++){
        vRepetidos[i - 1] = cuentaElementos(vectorNuevo, 5, i);
    }
    cout << endl;

    //Tiradera de dado para conseguir puntaje
    rlutil::setColor(rlutil::RED);
    cout<<"---------------------------------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout << "Quieres volver a tirar un dado? (S/N)"<<endl;
    rlutil::setColor(rlutil::RED);
    cout<<"---------------------------------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);

    cin >> seguirTirando;

    if (seguirTirando == 's' || seguirTirando == 'S') {
            int lalo = 1;
    if (lalo == 1) {
            rlutil::setColor(rlutil::RED);
    cout<<"-----------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout << "Cuantos dados?: "<<endl;
    rlutil::setColor(rlutil::RED);
    cout<<"-----------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cin >> cantDados;
    cout<<endl;
        }
    }

    if (seguirTirando == 'S' || seguirTirando == 's' && sigoTiro == true) {
        for (int good = 0; good < cantDados; good++) {
                rlutil::setColor(rlutil::RED);
            cout<<"-----------------------"<<endl;
            rlutil::setColor(rlutil::WHITE);
            cout << "Ingrese dado a cambiar: "<<endl;
            rlutil::setColor(rlutil::RED);
            cout<<"-----------------------"<<endl;
            rlutil::setColor(rlutil::WHITE);
        cin>>insta;
            vectorNuevo[insta - 1] =  1 + rand()  % 6;
        }
        sigoTiro = false;
        cout << endl;

    rlutil::cls();
    rlutil::setColor(rlutil::RED);
        cout<<"---------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"Su nuevo juego es: "<<endl;
        rlutil::setColor(rlutil::RED);
        cout<<"---------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        mostrarAleatorio(vectorNuevo, 5);
        cout<<endl;

        int i3;
        rlutil::setColor(rlutil::RED);
    for (i3 = 0; i3 < 5; i3++) {


        if (vectorNuevo[i3] == 1) {

            dado1();
        } else {
            if (vectorNuevo[i3] == 2) {

                dado2();
            } else {
                if (vectorNuevo[i3] == 3) {

                    dado3();
                } else {
                    if (vectorNuevo[i3]  == 4) {

                        dado4();
                    } else {
                        if (vectorNuevo[i3] == 5) {

                            dado5();
                        } else {
                            if (vectorNuevo[i3] == 6) {
                                dado6();

                            }
                        }
                    }
                }
            }
        }

}
rlutil::setColor(rlutil::WHITE);
cout<<"Preciona una tecla para continuar...";
    rlutil::anykey();

    }

     rlutil::cls();

    //Verificacion de cuales numeros se repiten
    for(i=1;i<=6;i++){
        vRepetidos[i - 1] = cuentaElementos(vectorNuevo, 5, i);
    }


    cout << endl;

    int iDos;
    rlutil::setColor(rlutil::RED);
    for (iDos = 0; iDos < 5; iDos++) {
        if (vectorNuevo[iDos] == 1) {
            dado1();
        } else {
            if (vectorNuevo[iDos] == 2) {
                dado2();
            } else {
                if (vectorNuevo[iDos] == 3) {
                    dado3();
                } else {
                    if (vectorNuevo[iDos]  == 4) {
                        dado4();
                    } else {
                        if (vectorNuevo[iDos] == 5) {
                            dado5();
                        } else {
                            if (vectorNuevo[iDos] == 6) {
                                dado6();
                            }
                        }
                    }
                }
            }
        }
}

    //Muestra aleatorios
    rlutil::setColor(rlutil::WHITE);
    //mostrarAleatorio(vRepetidos, 6);

     //Hay generala?
    generalaLoca(vRepetidos);
    if (generalaLoca(vRepetidos) == 50) {
        puntaje = 50;
        cout << "Generala";
    }

    if (puntaje == 50 && p == 1) {
        ganancia = 1;
        cout << "Generala" << endl;
        cout << "GANASTE PERRITOO";
    }

    //Hay poker?
    pokerLoco(vRepetidos);
    if (pokerLoco(vRepetidos) == 40) {
            cout << "Poker";
        puntaje = 40;
    }

    //Hay full?
    fullLoco(vRepetidos);
    if (fullLoco(vRepetidos) == 30) {
        cout << "Full";
        puntaje = 30;
    }

    //Hay escalera?
    calcularEscalera(vectorNuevo, 5);
    if (calcularEscalera(vectorNuevo, 5) == 25) {
        cout << "Escalera";
        puntaje = 25;
    }
    //Hay juego de dados?
    if (puntaje == 0) {
        for (i = 0; i < 5; i++) {
            if (vectorNuevo[i] == 1) {
            cUno = cUno + 1;
                puntaje = puntaje + 1;
        }

        if (vectorNuevo[i] == 2) {
            cDos = cDos + 1;
                puntaje = puntaje + 2;
        }

        if (vectorNuevo[i] == 3) {
            cTres = cTres + 1;
                puntaje = puntaje + 3;
        }

        if (vectorNuevo[i] == 4) {
            cCuatro = cCuatro + 1;
                puntaje = puntaje + 4;
        }

        if (vectorNuevo[i] == 5) {
            cCinco = cCinco + 1;
                puntaje = puntaje + 5;
        }

        if (vectorNuevo[i] == 6) {
            cSeis = cSeis + 1;
                puntaje = puntaje + 6;
        }
                        }
                      }


        //Mostrar puntaje
        cout << endl;
        rlutil::setColor(rlutil::RED);
        cout<<"-----------------------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout << "Obtuviste un puntaje de: " << puntaje << endl;
        rlutil::setColor(rlutil::RED);
        cout<<"-----------------------------------------------------"<<endl;

        if (banDera == 0) {
            banDera = 1;
            maxPuntajeTurno = puntaje;
        } else {
            if (puntaje > maxPuntajeTurno) {
                maxPuntajeTurno = puntaje;
            }
        }


        rlutil::setColor(rlutil::WHITE);

         cout<<"Precione una tecla para terminar el turno";
        rlutil::anykey();
         rlutil::cls();
         rlutil::setColor(rlutil::RED);
         cout<<"-----------------------------------------------------"<<endl;
         rlutil::setColor(rlutil::WHITE);
        cout<<"Terminaste el turno"<<" "<<p << endl;
        rlutil::setColor(rlutil::RED);
        cout<<"-----------------------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout << "Con los siguientes dados: "<<endl;


        mostrarAleatorio(vectorNuevo, 5);
        cout<<endl;

        rlutil::setColor(rlutil::RED);
        int i4;
        for (i4 = 0; i4 < 5; i4++) {


        if (vectorNuevo[i4] == 1) {

            dado1();
        } else {
            if (vectorNuevo[i4] == 2) {

                dado2();
            } else {
                if (vectorNuevo[i4] == 3) {

                    dado3();
                } else {
                    if (vectorNuevo[i4]  == 4) {

                        dado4();
                    } else {
                        if (vectorNuevo[i4] == 5) {

                            dado5();
                        } else {
                            if (vectorNuevo[i4] == 6) {
                                dado6();

                            }
                        }
                    }
                }
            }
        }

}

        cout << endl;
        rlutil::setColor(rlutil::RED);
        cout<<"-----------------------------------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"Fin del turno "<<p;
        rlutil::setColor(rlutil::RED);
        cout<<"|";
        rlutil::setColor(rlutil::WHITE);
        cout<< "Obtuviste un puntaje de: " << puntaje << endl;
        rlutil::setColor(rlutil::RED);
        cout<<"-----------------------------------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"Precione una tecla para continuar..."<<endl;
        rlutil::anykey();
        puntajeGlobal = puntajeGlobal + puntaje;
        rlutil::cls();


    }

    }

    //Mostrar puntaje global
    rlutil::setColor(rlutil::RED);
    cout<<"-----------------------------------------------------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);
    if (klp == 0) {
        cout << "Puntaje en total de ";
        mostrarPalabras(n, k);
        cout << " ";
        mostrarPalabras(po, y);
        cout << " es de: "  << puntajeGlobal<<endl;
    } else {
        cout << "Puntaje en total de ";
        mostrarPalabras(nDos, k);
        cout << " ";
        mostrarPalabras(poDos, kilo);
        cout << " es de: "  << puntajeGlobal<<endl;
    }
    rlutil::setColor(rlutil::RED);
    cout<<"-----------------------------------------------------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout << "Puntaje maximo es de: " << maxPuntajeTurno << endl;
    rlutil::setColor(rlutil::RED);
    cout<<"-----------------------------------------------------------------"<<endl;
    if (p=maxi)
        {   rlutil::cls();
        rlutil::setColor(rlutil::RED);
         cout<<"--------------------------"<<endl;
         rlutil::setColor(rlutil::WHITE);
            cout<<"Fin del turno de: ";
            if (conjug=1)
                {
            mostrarPalabras(n, z);
            cout << " ";
            mostrarPalabras(po, y);
            cout<<endl;
            rlutil::setColor(rlutil::RED);
             cout<<"--------------------------"<<endl;
            cout<<endl;
            rlutil::setColor(rlutil::RED);
            cout<<"--------------------------"<<endl;
            rlutil::setColor(rlutil::WHITE);
            cout<<"Proximo turno: ";
             mostrarPalabras(nDos, k);
            cout << " ";
            mostrarPalabras(poDos, kilo);
            cout<<endl;
            rlutil::setColor(rlutil::RED);
             cout<<"--------------------------"<<endl;
             rlutil::setColor(rlutil::WHITE);
              std::cout<<"Precione una tecla para empezar ";
             mostrarPalabras(nDos, k);
            cout << " ";
            mostrarPalabras(poDos, kilo);
            cout<<endl;
            }else
            {
            mostrarPalabras(nDos, k);
            cout << " ";
            mostrarPalabras(poDos, kilo);
            cout<<endl;
             rlutil::setColor(rlutil::RED);
         cout<<"--------------------------"<<endl;
            }

        }
        bandera1=1;
        rlutil::anykey();
        rlutil::cls();



    if (ganancia == 1) {
            cout << "Felicidades sacaste Generala";
    }

    if(plo == 0) {
        puntajeGlobalAnt = puntajeGlobal;
        plo = 1;
    }

    if (kulo == 0) {
        puntajeGlobal = 0;
        kulo = 1;
    }

}

        if (puntajeGlobal > puntajeGlobalAnt) {
            cout << endl;
                cout << "Gano ";
                mostrarPalabras(nDos, k);
                cout << " ";
                mostrarPalabras(poDos, kilo);
                rlutil::anykey();
                return puntajeGlobal;

        } else {
            if (puntajeGlobalAnt > puntajeGlobal) {
                cout << endl;
                rlutil::setColor(rlutil::WHITE);
            cout << "Gano ";
            mostrarPalabras(n, k);
            cout << " ";
            mostrarPalabras(po, y);
            return puntajeGlobalAnt;
            rlutil::anykey();
            } else {
                cout << endl;
                rlutil::setColor(rlutil::WHITE);
                cout << "Empate :) ";
                return puntajeGlobal;
                rlutil::anykey();
            }
        }

rlutil::setColor(rlutil::WHITE);
cout<<"Precione una tecla para volver al menu principal..."<<endl;
        rlutil::anykey();

}
#endif // VOIDDOS_H_INCLUDED
