#include <iostream>
#include "funciones.h"
#include "../rlutil.h"
using namespace std;

int tirada(){
    return rand ()% 6+1;
}

void hacerTirada(int vecDado[6])
{
    int x;
for(x=0; x<6; x++)
{
vecDado[x] = tirada();
}
}

void mostrarTirada(int vecDado[6])
{
    int x;
    for(x=0; x<6; x++)
    {
        cout << vecDado[x] << endl;
    }
}

//funcion de sexteto//

int sexteto(int vecDado[])
{
    int x;
    int cont = 0;
    int numero = vecDado[0];
    for(x = 0; x < 6; x++)
    {
        if(numero == vecDado[x])
        {
            cont++;
        }
    }
    if(cont == 6)
    {
        return numero;
    }
    else
    {
        return 0;
    }
}

//funcion de escalera//

bool escalera(int vecDado[6])
{
    bool esEscalera;
    int cont = 0;
    int x;
    for(x = 0; x < 6; x++)
    {
        int y;
        for(y = x+1; y < 6; y++)
        {
            if(vecDado[x] == vecDado[y])
            {
                cont++;
            }
        }
    }
    if(cont == 0)
    {
        esEscalera = true;
    }
    else
    {
        esEscalera = false;
    }
    return esEscalera;
}


 //Puntaje de la ronda//
int PuntajeMaxRonda(int tiradaA, int tiradaB, int tiradaC)
{
    int puntajeRonda;

if(tiradaA > tiradaB && tiradaA > tiradaC){
    puntajeRonda = tiradaA;
}
else if(tiradaB > tiradaA && tiradaB > tiradaC){
    puntajeRonda = tiradaB;
}
else {
    puntajeRonda = tiradaC;
}

return puntajeRonda;

}

//suma total de dados//
int SumarDados (int vecDado[6])
{
int x;
int suma = 0;
for (x=0; x<6; x++)
    {
        suma += vecDado[x];
    }
return suma;
}


//ceditos//
void creditos()
{
 cout << "--------------------------------- " << endl;
 cout << "ESTE JUEGO HA SIDO REALIZADO POR: " << endl;
 cout << endl;
 cout << "EL JUGADOR: FRANCO DELL OLIO, SU  Nº DE LEGAJO ES 30307. " << endl;
 cout << "EL JUGADOR: AGUSTIN QUINONES, SU Nº DE LEGAJO ES 30544. " << endl;
 cout << "EL JUGADOR BRUNO GODOY, SU Nº DE LEGAJO ES 30365. " << endl;
 cout << "--------------------------------------------------------- " << endl;
 system("pause");
}
//funcion para agegados//
void titilar (string mensaje, int x, int y)
{

 for(int i=1; i<60; i++)
    {
            if(i%2==0){
              rlutil::setColor(rlutil::RED);
              rlutil::setBackgroundColor(rlutil::WHITE);
            }
            else{
                rlutil :: setColor(rlutil::RED);
                rlutil::setBackgroundColor(rlutil::BLACK);
            }
            rlutil::locate(x,y);
            cout << mensaje;
rlutil::msleep(100);
rlutil::hidecursor();
 }
 }
