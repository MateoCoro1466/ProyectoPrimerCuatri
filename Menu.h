#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#endif  FUNCIONES_H_INCLUDED
#include "rlutil.h"
#include "Funciones nombre.h"
#include "voidDos.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void primermenu ()
{   int columnas=0,filas=0;

    ///agregar dados de decoracion

    rlutil::locate(35/*columnas */,10/*filas*/);
    rlutil::setColor(rlutil::RED);
    std::cout<<"-------------------------------------";
        rlutil::locate(34,11);
        cout<<"|"<<endl;
        rlutil::locate(34,12);
        cout<<"|"<<endl;
rlutil::setColor(rlutil::WHITE);

    rlutil::locate(35,11);
    cout<<"Generala";
    rlutil::locate(35,12);
    cout<<"Presiona una tecla para continuar...";
     rlutil::locate(71,11);
rlutil::setColor(rlutil::RED);
        cout<<"|"<<endl;
        rlutil::locate(71,12);
        cout<<"|"<<endl;

    rlutil::locate(35,13);
    cout<<"-------------------------------------";
    rlutil::anykey();




}

int llamarNumero(int n) {
    int y=0,x=1;
    rlutil::cls();
    rlutil::hidecursor();
    do {    rlutil::hidecursor();
            rlutil::setColor(rlutil::WHITE);
            rlutil::locate(1,1);

    rlutil::locate(30/*columnas */,10/*filas*/);
    cout<<"------------------------------"<<endl;
    rlutil::locate(30/*columnas */,11/*filas*/);
    cout << "Ingrese el modo de juego"<<endl;
    rlutil::locate(30/*columnas */,12/*filas*/);
    cout<<"------------------------------"<<endl;
    rlutil::locate(30/*columnas */,13/*filas*/);
    cout<< "Modo un jugador"<<endl;
    rlutil::locate(30/*columnas */,14/*filas*/);
    cout<< "Modo dos jugadores"<<endl;
    rlutil::locate(30/*columnas */,15/*filas*/);
    cout<< "Modo de correcion un jugador"<<endl;
    rlutil::locate(30/*columnas */,16/*filas*/);
    cout<< "Modo de correcion dos jugadores"<<endl;
    rlutil::locate(30/*columnas */,17/*filas*/);
    cout << "Ver Puntaje maximo"<<endl;
     rlutil::locate(30/*columnas */,18/*filas*/);
    cout << "Salir"<<endl;

    rlutil::locate(28,13+y);
    switch (y)
    {


case 0:
    rlutil::setColor(rlutil::BLUE);
    break;
case 1:
    rlutil::setColor(rlutil::RED);
    break;
case 2:
    rlutil::setColor(rlutil::GREEN);
    break;
case 3:
    rlutil::setColor(rlutil::CYAN);
    break;
case 4:
    rlutil::setColor(rlutil::YELLOW);
    break;
case 5:
    rlutil::setColor(rlutil::DARKGREY);
default:
    rlutil::setColor(rlutil::LIGHTBLUE);
    break;

    }
    cout<<(char)175<<endl;

    switch (rlutil::getkey())
    {
        case 14:
            rlutil::locate(28,13+y);
            cout<<" "<<endl;
            y--;
            if (y<0)
            {
                y=0;
            }

        break;
        case 15:
             rlutil::locate(28,13+y);
            cout<<" "<<endl;
            y++;
            if (y>5)
            {
                y=5;
            }

        break;
       case 1:
            switch (y)
            {
            case 0:
                n=1;
                x=0;
                //un jugadoor
                break;
           case 1:
               //dos jugadores
                n=2;
                x=0;

            break;
            case 2:
               //correcion 1
                n=3;
                x=0;

            break;
           case 3:
               //correcion 2
                x=0;
                n=4;
                break;
           case 4:
               //puntuacion
            x=0;
            n=5;
            break;
           case 5:
            x=0;
            n=6;
            break;


    }


    }

    }while(x !=0 );

    return n;
    rlutil::setColor(rlutil::WHITE);
}

int cantJugadores (int n) {
    rlutil::cls();
    if (n == 1) {
        string nombre, apellido;
        cout << "Ingrese el nombre del jugador 1 " << endl;
        cin >> nombre;
        cout << "Ingrese el apellido del jugador 1 " << endl;
        cin>>apellido;
        rlutil::cls();
        string nomb1=nombre+" " +apellido;
        rlutil::locate(1,1);
        cout<<"Jugador numero 1: "<<nomb1<<endl;
        rlutil::locate(1,4);
        std::cout<<"Precione una tecla para tirar los dados"<<endl;

        rlutil::anykey();

    } else {
        if (n == 2) {
            string nombre, apellido, nombre2, apellido2;
            cout << "Ingrese el nombre del jugador 1 " << endl;
            cin >> nombre;
            cout << "Ingrese el apellido del jugador 1 " << endl;
            cin>>apellido;
            rlutil::cls();
            string nombrejug1= nombre+ " " +apellido;
            rlutil::locate(1,1);
            cout<<"Jugador numero 1: "<<nombrejug1<<endl;
            cout << "Ingrese el nombre del jugador 2 " << endl;
            cin >> nombre2;
            cout << "Ingrese el apellido del jugador 2 " << endl;
            cin>>apellido2;
            string nombrejug2= nombre2+ " " +apellido2;
            rlutil::cls();
            rlutil::locate(1,1);
            cout<<"Jugador numero 1: "<<nombrejug1<<endl;
            rlutil::locate(50,1);
            cout<<"Jugador numero 2: "<<nombrejug2;
            rlutil::locate(1,4);
            std::cout<<"Precione una tecla para tirar los dados"<<endl;
            rlutil::anykey();




        }


    }
    return(n);

}

int unJugador(char n[], char po[]) {
    rlutil::cls();
    n[15];
    po[15];
    int x;
    rlutil::setColor(rlutil::BLUE);
        cout<<"-------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        cout << "Ingrese el nombre del jugador 1 " << endl;
        rlutil::setColor(rlutil::BLUE);
        cout<<"-------------------------------------"<<endl;
        rlutil::setColor(rlutil::WHITE);
        int z = cargarPalabras(n, x);

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
        int y = cargarPalabras(po, x);
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






         rlutil::setColor(rlutil::WHITE);
        cout << "Gracias por jugar ";
        mostrarPalabras(n, z);
        cout << "";
        mostrarPalabras(po, y);
        cout<<endl;
        cout<<"Precione una tecla para volver al menu principal..."<<endl;
        rlutil::anykey();


        return 0;
}

void dosJugadores(char n[], char po[], char nDos[], char poDos[]) {
    rlutil::cls();

    n[15];
    po[15];
    nDos[15];
    poDos[15];
    int x;
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
        rlutil::setColor(rlutil::WHITE);
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
            rlutil::locate(1,4);
            rlutil::setColor(rlutil::WHITE);
            std::cout<<"Precione una tecla para tirar los dados"<<endl;
            rlutil::anykey();



}
void salir()
{   cout<<endl;
    rlutil::cls();
    rlutil::setColor(rlutil::WHITE);
    cout <<"Gracias por jugar"<<endl;
    rlutil::anykey();
}
int verpuntaje(int x)
{   rlutil::cls();
    rlutil::setColor(rlutil::WHITE);
    cout<<"Puntaje maximo : "<<x<<endl;
    cout<<"Precione una tecla para volver al menu principal..."<<endl;
        rlutil::anykey();

}
#endif // MENU_H_INCLUDED



