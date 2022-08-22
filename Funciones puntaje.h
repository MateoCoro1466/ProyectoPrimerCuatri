#ifndef FUNCIONES_PUNTAJE_H_INCLUDED
#define FUNCIONES_PUNTAJE_H_INCLUDED
#include "Funciones nombre.h"
#include "rlutil.h"

//Funcion para saber si hay generala
int generalaLoca (int vRepetidos[]) {
    int i;
    int puntaje = 0;
    for (i = 0; i <= 6; i++) {
            vRepetidos[i - 1];
        if (vRepetidos[i-1] == 5) {
            puntaje = 50;
    }
}
    return puntaje;
}

//Funcion para saber si hay poker
int pokerLoco(int vRepetidos[]) {
    int i;
    int puntaje;
    for (i = 0; i <= 6; i++) {
        vRepetidos[i - 1];
    if (vRepetidos[i-1] == 4) {
            puntaje = 40;
    }
}
   return puntaje;
}

//Funcion para saber si hay full
int fullLoco (int vRepetidos[]) {
    int i;
    int puntaje;
    int duma = 0;
    int z = 0;
    int x = 0;
    for (i = 0; i <= 6; i++) {
        vRepetidos[i - 1];
        if (vRepetidos[i-1] == 3) {
                    duma = duma + 1;
                    z = 8;
                }
                if (vRepetidos[i - 1] == 2) {
                    duma = duma + 1;
                    x = 6;
                } if (duma == 2 && x == 6 && z == 8) {
                    puntaje = 30;
    }
 }
 return puntaje;
}

//Funcion para cambiar algun dado
void cambiarElementoAleatorio(int n[], int tam, int cambio) {
    srand(time(NULL));
    int i;
    rlutil::setColor(rlutil::BLUE);
    cout<<"----------------------------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cout << "Ingresame que dado queres cambiar: "<<endl;
    rlutil::setColor(rlutil::BLUE);
    cout<<"----------------------------------------"<<endl;
    rlutil::setColor(rlutil::WHITE);
    cin >> cambio;
    cambio = cambio - 1;
    switch (cambio) {

        case 0: {
        n[cambio] = 1 + rand() % (6);
        n[cambio] = 1 + rand() % (6); }
        break;

        case 1: { int queso = cambio - 1;
        n[cambio] = 1 + rand() % (6); }
        break;

        case 2: { int queso = cambio - 1;
        n[cambio] = 1 + rand() % (6); }
        break;

        case 3: { int queso = cambio - 1;
        n[cambio] = 1 + rand() % (6); }
        break;

        case 4: { int queso = cambio - 1;
        n[cambio] = 1 + rand() % (6); }
        break;
    }
}

//Funcion para ingresar un vector
void ingresarAleatorio(int n[], int tam) {
       srand(time(NULL));
    int i;
    for (i = 0; i < tam; i++) {
        cin >> n[i];
    }
}

//Funcion para cargar aleatorio
void cargarAleatorio(int n[], int tam) {
       srand(time(NULL));
    int i;
    for (i = 0; i < tam; i++) {
        n[i] = 1 + rand() % 6;
    }
}

//Funcion para mostrar vector
void mostrarAleatorio(int n[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        cout << n[i];
    }
}

//Funcion para calcular escalera
int calcularEscalera (int n[], int tam) {
    int puntaje = 0;
    int cantM = 0;
    int cantMen = 0;
    int B = 0;
    int C = 0;
    int ant;
    int antO;
    int i;

    for (i = 0; i < tam; i++) {
        if (B == 0) {
        ant = n[i];
        B = 1;
    } else {
        if (ant < n[i] && ant != n[i]) {
            cantM = cantM + 1;
            ant = n[i];
        }
    }
    }

    for (i = 0; i < tam; i++) {
        if (C == 0) {
        antO = n[i];
        C = 1;
    } else {
        if (ant > n[i] && ant != n[i]) {
            cantMen = cantMen + 1;
            antO = n[i];
        }
    }
    }

    if (cantM == 4 || cantMen == 4) {
        puntaje = 25;
    }
    return puntaje;

}

//Funcion para contar elementos
int cuentaElementos(int n[], int tam, int numero) {
    int i;
    int cant = 0;
    for (i = 0; i < tam; i++) {
        if (n[i] == numero) {
            cant++;
        }
    }
    return cant;
}




#endif // FUNCIONES_PUNTAJE_H_INCLUDED
