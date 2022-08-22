#ifndef VOID_H_INCLUDED
#define VOID_H_INCLUDED
#include "rlutil.h"
#include "Funciones nombre.h"

int uno(int puntajemaximo) {
    char n[15];
    char po[15];
    int x2;
    rlutil::cls();
    rlutil::setColor(rlutil::BLUE);
        cout<<"-------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout << "Ingrese el nombre del jugador 1 " << endl;
        rlutil::setColor(rlutil::BLUE);
        cout<<"-------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        int z = cargarPalabras(n, x2);

        rlutil::cls();
        rlutil::setColor(rlutil::BLUE);
        cout<<"-------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout << "Nombre: ";
        mostrarPalabras(n, z);

        cout << endl;
        rlutil::setColor(rlutil::BLUE);
        cout<<"-------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout << "Ingrese el apellido del jugador 1 " << endl;
        int y = cargarPalabras(po, x2);
        rlutil::cls();
        rlutil::locate(1,1);
        rlutil::setColor(rlutil::BLUE);
        cout<<"-------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        mostrarPalabras(n, z);
        cout << " ";
        mostrarPalabras(po, y);
        rlutil::setColor(rlutil::BLUE);
        cout<<endl;
        cout<<"-------------------------------------"<<endl;
        rlutil::locate(1,6);
        rlutil::setColor(rlutil::WHITE);
        std::cout<<"Precione una tecla para tirar los dados"<<endl;
        rlutil::anykey();
        rlutil::cls();
        rlutil::setColor(rlutil::BLUE);
        cout<<"-------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        mostrarPalabras(n, z);
        cout << " ";
        mostrarPalabras(po, y);
        rlutil::setColor(rlutil::BLUE);
        cout<<endl;
        cout<<"-------------------------------------"<<endl;

    //Creacion de puntaje global y cantidad de turnos

    int maxPuntajeTurno=0;
    int ganancia = 0;
    int good;
    int insta;
    int puntajeGlobal = 0;
    int p;
    int banDera = 0;
    int x;
    ///RONDAS
    int maxi=1;
    int tiradas=0;
    for (p = 1; p <= maxi; p++) {


    if (ganancia != 1) {
            rlutil::setColor(rlutil::BLUE);
    cout<<"-------------------------------------------------------------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout << "Turno numero: " << p<<"/"<<maxi<<"|"<<"Puntaje actual: "<<puntajeGlobal<<endl;
    rlutil::setColor(rlutil::BLUE);
    cout<<"-------------------------------------------------------------------------"<<endl;
    //Instansiacion de variables

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
    rlutil::setColor(rlutil::BLUE);
    cout<<endl;
    // muestra primeros dados
    tiradas++;

    int iUno;
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
    for(i=1;i<=6;i++){
        vRepetidos[i - 1] = cuentaElementos(vectorNuevo, 5, i);
    }
    cout << endl;

    //Tiradera de dado para conseguir puntaje
    rlutil::setColor(rlutil::BLUE);
    cout<<"---------------------------------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout << "Quieres volver a tirar un dado? (S/N)"<<endl;
    rlutil::setColor(rlutil::BLUE);
    cout<<"---------------------------------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cin >> seguirTirando;

    //Tiradera de dado para conseguir puntaje

    if (seguirTirando == 's' || seguirTirando == 'S') {
            int lalo = 1;
    if (lalo == 1) {
            tiradas++;
            rlutil::setColor(rlutil::BLUE);
    cout<<"-----------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout << "Cuantos dados?: "<<endl;
    rlutil::setColor(rlutil::BLUE);
    cout<<"-----------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cin >> cantDados;
    cout<<endl;
        }
    }

    if (seguirTirando == 'S' || seguirTirando == 's' && sigoTiro == true) {
        for (good = 0; good < cantDados; good++) {
            rlutil::setColor(rlutil::BLUE);
            cout<<"-----------------------"<<endl;
            rlutil::setColor(rlutil::WHITE);
            cout << "Ingrese dado a cambiar: "<<endl;
            rlutil::setColor(rlutil::BLUE);
            cout<<"-----------------------"<<endl;
            rlutil::setColor(rlutil::WHITE);
            cin >> insta;
            vectorNuevo[insta - 1]= 1 + rand() % 6;
        }
        cout << endl;
        sigoTiro = false;

    rlutil::cls();
    rlutil::setColor(rlutil::BLUE);
        cout<<"---------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"Su nuevo juego es: "<<endl;
        rlutil::setColor(rlutil::BLUE);
        cout<<"---------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        mostrarAleatorio(vectorNuevo, 5);
        cout<<endl;

        int i3;
        rlutil::setColor(rlutil::BLUE);
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

    //Muestra aleatorios
    //mostrarAleatorio(vRepetidos, 6);

    cout << endl;

    int iDos;
    rlutil::setColor(rlutil::BLUE);
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


    //Hay generala?
    generalaLoca(vRepetidos);
    if (generalaLoca(vRepetidos) == 50) {
        puntaje = 50;
        cout << "Generala";
    }

    if (puntaje == 50 && p == 1) {
        ganancia = 1;
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
        rlutil::setColor(rlutil::BLUE);
        cout<<"-----------------------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout << "Obtuviste un puntaje de: " << puntaje << endl;
        rlutil::setColor(rlutil::BLUE);
        cout<<"-----------------------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);

        if (banDera == 0) {
            banDera = 1;
            maxPuntajeTurno = puntaje;
        } else {
            if (puntaje > maxPuntajeTurno) {
                maxPuntajeTurno = puntaje;
            }
        }
        rlutil::setColor(rlutil::WHITE);
        cout<<"Precione una tecla para terminar el turno"<<endl;
        rlutil::setColor(rlutil::BLUE);
        cout<<"-----------------------------------------------------"<<endl;
        rlutil::anykey();
         rlutil::cls();
        cout<<"-----------------------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"Terminaste el turno"<<" "<<p << endl;
        rlutil::setColor(rlutil::BLUE);
        cout<<"-----------------------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout << "Con los siguientes dados: "<<endl;

        mostrarAleatorio(vectorNuevo, 5);
        cout<<endl;
        int i4;
        rlutil::setColor(rlutil::BLUE);
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
        rlutil::setColor(rlutil::BLUE);
        cout<<"-----------------------------------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"Fin del turno "<<p;
        rlutil::setColor(rlutil::BLUE);
        cout<<"|";
        rlutil::setColor(rlutil::WHITE);
        cout<< "Obtuviste un puntaje de: " << puntaje << endl;
        rlutil::setColor(rlutil::BLUE);
        cout<<"-----------------------------------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout<<"Precione una tecla para continuar..."<<endl;
        rlutil::setColor(rlutil::BLUE);
        cout<<"-----------------------------------------------------------------"<<endl;
        rlutil::anykey();
        puntajeGlobal = puntajeGlobal + puntaje;
        rlutil::cls();

    }

        //Mostrar puntaje global
    }

     rlutil::setColor(rlutil::BLUE);
    cout<<"-------------------------------------------------------"<<endl;

    rlutil::setColor(rlutil::WHITE);
    cout << "Puntaje total es de: " << puntajeGlobal <<" en "<<tiradas<<" tiradas"<< endl;
     rlutil::setColor(rlutil::BLUE);
    cout<<"-------------------------------------------------------"<<endl;

    if (ganancia == 1) {
            cout << "Felicidades sacaste Generala";
    }
    if (puntajeGlobal>puntajemaximo)
    {
        puntajemaximo=puntajeGlobal;
    }
    rlutil::setColor(rlutil::WHITE);
    cout<<"GRacias x jugar";
    mostrarPalabras(n,z);
    cout<<" ";
    mostrarPalabras(po,y);
    cout<<"Precione una tecla para volver al menu principal..."<<endl;
        rlutil::anykey();
    return puntajemaximo;

}



#endif // VOID_H_INCLUDED
