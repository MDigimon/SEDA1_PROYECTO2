#ifndef funciones
#define funciones

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <sstream>
#include "clases.h"

using namespace std;

void gotoxy(int x,int y);
void caminar(int x);
void caminar2(int x);
void caminar_maletas(int m, int x);
int comprobar(string dato);
int vacia(Pasajero* frente);
void captura(Pasajero *&frente, Pasajero *&fin);
void agregar_cola(Pasajero *&frente, Pasajero *&fin, string a, int b);

int pasajeros();
int vuelo();

#endif
//funciones.h
