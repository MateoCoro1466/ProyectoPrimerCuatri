#ifndef PRUEBA_H_INCLUDED
#define PRUEBA_H_INCLUDED
#include "rlutil.h"
#include "Funciones nombre.h"

void prueba() {
    rlutil::cls();
    rlutil::setColor(rlutil::WHITE);
    //Creacion de puntaje global y cantidad de turnos
    int maxPuntajeTurno=0;
    int good;
    int insta;
    int ganancia = 0;
    int puntajeGlobal = 0;
    int p;
    int banDera = 0;
    char n[15];
    int x;
    int maxi;
    cout<<"Ingrese la cantida de rondas"<<endl;
    cin>>maxi;
    for (p = 1; p <= maxi; p++) {

    if (ganancia != 1) {
    cout<<"-------------------------------------------------------------------------"<<endl;
    cout << "Turno numero: " << p<<"/"<<maxi<<"|"<<"Puntaje actual: "<<puntajeGlobal<<endl;
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
    ingresarAleatorio(vectorNuevo, 5);
    mostrarAleatorio(vectorNuevo, 5);
    cout<<endl;
    // muestra primeros dados

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
    cout<<"---------------------------------------------"<<endl;
    cout << "Quieres volver a tirar un dado? (S/N)"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cin >> seguirTirando;

    if (seguirTirando == 's' || seguirTirando == 'S') {
            int lalo = 1;
    if (lalo == 1) {
    cout<<"-----------------------"<<endl;
    cout << "Cuantos dados?: "<<endl;
    cout<<"-----------------------"<<endl;
    cin >> cantDados;
    cout<<endl;
        }
    }

    if (seguirTirando == 'S' || seguirTirando == 's' && sigoTiro == true) {
        for (good = 0; good < cantDados; good++) {
            cout << "Ingrese dado a cambiar: ";
            cin >> insta;
            vectorNuevo[insta - 1]= 1 + rand() % 6;
        }
        cout << endl;
        sigoTiro = false;

    rlutil::cls();
        cout<<"---------------------------"<<endl;
        cout<<"Su nuevo juego es: "<<endl;
        cout<<"---------------------------"<<endl;
        mostrarAleatorio(vectorNuevo, 5);
        cout<<endl;

        int i3;
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
        cout<<"-----------------------------------------------------"<<endl;
        cout << "Obtuviste un puntaje de: " << puntaje << endl;
        cout<<"-----------------------------------------------------"<<endl;

        if (banDera == 0) {
            banDera = 1;
            maxPuntajeTurno = puntaje;
        } else {
            if (puntaje > maxPuntajeTurno) {
                maxPuntajeTurno = puntaje;
            }
        }

        cout<<"Precione una tecla para terminar el turno"<<endl;
        cout<<"-----------------------------------------------------"<<endl;
        rlutil::anykey();
         rlutil::cls();
        cout<<"-----------------------------------------------------"<<endl;
        cout<<"Terminaste el turno"<<" "<<p << endl;
        cout<<"-----------------------------------------------------"<<endl;
        cout << "Con los siguientes dados: "<<endl;
        mostrarAleatorio(vectorNuevo, 5);
        cout<<endl;
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
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"Fin del turno "<<p<<"|"<< "Obtuviste un puntaje de: " << puntaje << endl;
        cout<<"-----------------------------------------------------------------"<<endl;
        cout<<"Precione una tecla para continuar..."<<endl;
        cout<<"-----------------------------------------------------------------"<<endl;
        rlutil::anykey();
        puntajeGlobal = puntajeGlobal + puntaje;
        rlutil::cls();

    }

        //Mostrar puntaje global
    }
    cout << "Puntaje en total de todos los puntos: " << puntajeGlobal;
    cout << endl;
    cout << "Puntaje maximo es de: " << maxPuntajeTurno << endl;

    if (ganancia == 1) {
            cout << "Felicidades sacaste Generala";
    }
cout<<"Precione una tecla para volver al menu principal..."<<endl;
        rlutil::anykey();
}

#endif // PRUEBA_H_INCLUDED
