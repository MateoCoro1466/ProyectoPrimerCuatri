#include <iostream>
#include <cstring>
#include <cstdlib>
#include<cstdio>
#include<ctime>

using namespace std;
#include "Funciones puntaje.h"
#include "void.h"
#include "Menu.h"
#include <string.h>
#include "Funciones nombre.h"
#include "voidDos.h"
#include "Prueba.h"
#include "PruebaDos.h"

//Main
int main()
{
    char no[15];
    int b=0,milanesa,pure;
    int Puntajemaximo=0;
    char po[15];
    char noDos[15];
    char poDos[15];
    int x=1;
   primermenu();
   rlutil::cls();
   int n;
   while(x!=0)
{
        switch (llamarNumero(n))
        {
        case 1:

        if (b==0)
        {
        milanesa=uno(Puntajemaximo);
        b=1;
        Puntajemaximo=milanesa;
        }else
        {   milanesa=uno(Puntajemaximo);
          if(milanesa>Puntajemaximo)
          {
             Puntajemaximo=milanesa;
          }
        }
        break;
        case 2:

            if(b==0)
            {
            pure=dos(Puntajemaximo);
            b=1;
            Puntajemaximo=pure;
            }else{

             pure=dos(Puntajemaximo);
             if(pure>Puntajemaximo)
                {
                Puntajemaximo=pure;
                }
            }



        break;
        case 3:
            prueba();
            break;
        case 4:
            pruebaDos();
            break;
        case 5:
            verpuntaje(Puntajemaximo);
            break;
        case 6:
            x=0;
            break;




        }
}
 salir();
   return 0;
}
