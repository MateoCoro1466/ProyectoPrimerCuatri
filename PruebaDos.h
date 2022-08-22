#ifndef PRUEBADOS_H_INCLUDED
#define PRUEBADOS_H_INCLUDED

int pruebaDos() {
    //Pedir nombres de ambos jugadores
    rlutil::setColor(rlutil::WHITE);
    int good;
    int insta;
    char n[15];
    char po[15];
    char nDos[15];
    char poDos[15];
    int x;
    rlutil::cls();

        cout<<"-------------------------------------"<<endl;
        cout << "Ingrese el nombre del jugador 1 " << endl;
        cout<<"-------------------------------------"<<endl;
        int z = cargarPalabras(n, x);
        rlutil::cls();
        cout<<"-------------------------------------"<<endl;
        cout << "Nombre: ";
        mostrarPalabras(n, z);
        cout << endl;
        cout<<"-------------------------------------"<<endl;
        cout << "Ingrese el apellido del jugador 1 " << endl;
        int y = cargarPalabras(po, x);
        rlutil::cls();
        rlutil::locate(1,1);
        cout<<"-------------------------------------"<<endl;
        cout << "Nombre del jugador uno: ";
        mostrarPalabras(n, z);
        cout << " ";
        mostrarPalabras(po, y);
        cout<<endl;
        cout<<"-------------------------------------"<<endl;
        rlutil::locate(1,4);
        //////////
            rlutil::cls();
            rlutil::locate(1,1);
            cout<<"-------------------------------------"<<endl;
            cout << "Ingrese el nombre del jugador 2 " << endl;
            cout<<"-------------------------------------"<<endl;
            int k = cargarPalabras(nDos, x);
            cout<<endl;

            rlutil::cls();
            cout<<"-------------------------------------"<<endl;
            cout << "Nombre: ";
            mostrarPalabras(nDos, k);
            cout<<endl;

            cout<<"-------------------------------------"<<endl;
            cout << "Ingrese el apellido del jugador 2 " << endl;
            int kilo = cargarPalabras(poDos, x);
            cout<<"-------------------------------------"<<endl;
            rlutil::cls();
            rlutil::locate(1,1);
            cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
            rlutil::locate(1,2);
            cout << "Nombre del jugador uno: ";
            mostrarPalabras(n, z);
            cout << " ";
            mostrarPalabras(po, y);
            cout<<"|";
            cout << "Nombre del jugador dos: ";
            mostrarPalabras(nDos, k);
            cout << " ";
            mostrarPalabras(poDos, kilo);
            cout<<endl;
             cout<<"-----------------------------------------------------------------------------------------------------------"<<endl;
              int maxi;
    cout<<"-------------------------------------"<<endl;
    cout<<"Ingrese la cantida de rondas"<<endl;
     cout<<"-------------------------------------"<<endl;
    cin>>maxi;
            rlutil::locate(1,8);
            std::cout<<"Precione una tecla para tirar los dados"<<endl;
            rlutil::anykey();


    //Creacion de puntaje global y cantidad de turnos
    int maxPuntajeTurno;
    int ganancia = 0;
    int puntajeGlobalAnt;
    int klp;
    int plo = 0;
    int kulo = 0;
    int puntajeGlobal = 0;
    int r=0;

    for (klp = 0; klp <= 1; klp++) {
            int p;
            int banDera = 0;
            if (klp == 0) {
                cout << "Turno de: ";
                mostrarPalabras(n, z);
                cout << " ";
                mostrarPalabras(po, y);
                cout<<endl;
            } else {
                cout << "Turno de: ";
                mostrarPalabras(nDos, k);
                cout << " ";
                mostrarPalabras(poDos, kilo);
                cout<<endl;
            }

    for (p = 1; p <= maxi; p++) {

    if (ganancia != 1) {

          cout << "Turno numero: " << p;
          ///mostrar nombre del jugador que esta jugando xd

         /* if (r=0)
            {
            mostrarPalabras (n,k);
           cout << " ";
            mostrarPalabras(po, y);
            cout<<endl;
            r=1;
            } else
            {
                 mostrarPalabras(nDos, k);
                cout << " ";
                mostrarPalabras(poDos, kilo);
            }*/
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
    ingresarAleatorio(vectorNuevo, 5);
    mostrarAleatorio(vectorNuevo, 5);

    cout << endl;
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
    cout << endl;
    for(i=1;i<=6;i++){
        vRepetidos[i - 1] = cuentaElementos(vectorNuevo, 5, i);
    }
    cout << endl;

   //Tiradera de dado para conseguir puntaje
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

    //Verificacion de cuales numeros se repiten
    for(i=1;i<=6;i++){
        vRepetidos[i - 1] = cuentaElementos(vectorNuevo, 5, i);
    }


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

    //Muestra aleatorios
    mostrarAleatorio(vRepetidos, 6);

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
        cout << "Obtuviste un puntaje de: " << puntaje << endl;

        if (banDera == 0) {
            banDera = 1;
            maxPuntajeTurno = puntaje;
        } else {
            if (puntaje > maxPuntajeTurno) {
                maxPuntajeTurno = puntaje;
            }
        }



         cout<<"Precione una tecla para terminar el turno";
        rlutil::anykey();
         rlutil::cls();
        cout<<"Terminaste el turno"<<" "<<p << endl;
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
        cout<<"Fin del turno "<<p<<"|"<</* NOMBRE JUGADOR UNO*/"|"<< "Obtuviste un puntaje de: " << puntaje << endl;
        cout<<"Precione una tecla para continuar..."<<endl;
        rlutil::anykey();
        puntajeGlobal = puntajeGlobal + puntaje;
        rlutil::cls();

    }

    }

    //Mostrar puntaje global
    cout << "Puntaje en total de todos los puntos: " << puntajeGlobal;
    cout << endl;
    cout << "Puntaje maximo es de: " << maxPuntajeTurno << endl;



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
        } else {
            if (puntajeGlobalAnt > puntajeGlobal) {
                cout << endl;
            cout << "Gano ";
            mostrarPalabras(n, k);
            cout << " ";
            mostrarPalabras(po, y);
            rlutil::anykey();
            } else {
                cout << endl;
                cout << "Empate :) ";
                rlutil::anykey();
            }
        }
cout<<"Precione una tecla para volver al menu principal..."<<endl;
        rlutil::anykey();
}

#endif // PRUEBADOS_H_INCLUDED
