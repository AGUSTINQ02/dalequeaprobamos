#include <iostream>
#include "menu.h"
#include "juego.h"
#include "funciones.h"
#include "../rlutil.h"
using namespace std;

void menu()
{


    int seleccion;
    do
    {
        system ("cls");
        rlutil::setColor(rlutil::RED);
        rlutil::locate(54,4);
        cout << "-------------------------" << endl;
        rlutil::locate(54,5);
        cout << "1. JUGAR MODO INDIVIDUAL " << endl;
        rlutil::locate(54,6);
        cout << "2. JUGAR MODO 2 JUGADORES " << endl;
        rlutil::locate(54,7);
        cout << "3. MODO SIMULACION " << endl;
        rlutil::locate(54,8);
        cout << "4. ESTADISTICAS " << endl;
        rlutil::locate(54,9);
        cout << "5. CREDITOS" << endl;
        rlutil::locate(54,10);
        cout << "------------------------" << endl;
        rlutil::locate(54,11);
        cout << "0. SALIR DEL JUEGO "<< endl;
        rlutil::locate(54,12);
        cout << "OPCION PARA SELECCIONAR: ";
        cin >> seleccion;

        switch (seleccion)
        {

        case 0:
            return;
            break;

        case 1:
            modo1jugador();

            break;

        case 2:
            modo2jugadores();

            break;

        case 3:
            modoPrueba1Jugador();
            modoPrueba2Jugadores();
            int seleccion;
            do{
                system("cls");
                cout << "-------------------------" << endl;
                 cout << "1. JUGAR MODO INDIVIDUAL " << endl;
                 cout << "2. JUGAR MODO 2 JUGADORES " << endl;
                  cout << "------------------------" << endl;
                  cin >> seleccion;

                switch (seleccion) {
                  case 1:
                  modoPrueba1Jugador ();
                  break;

                  case 2:
                  modoPrueba2Jugadores();
                  break;
                  }
                  while (true);
            }
            break;

        case 4:


            break;

        case 5:
            creditos();
            break;


        }


    }


    while(true);


}
