#ifndef animaciones
#define animaciones

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <sstream>
#include "clases.h"

using namespace std;

void principal();
void ticket(int n, Pasajero *&cola);
void maletas(int n, Pasajero *&cola);
void avion(int n, Pasajero *&frente);
void taxy(int n, Pasajero *&cola);



#endif
