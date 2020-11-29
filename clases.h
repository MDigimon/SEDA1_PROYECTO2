#ifndef clases
#define clases

#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

class Pasajero{
	private:
		string nombre;
		int maletas;
	public:
		int get_maletas();
		void captura();
};

class Cola{
	public:
		Pasajero persona; 
		Cola* next;
};

class Pila{
	public:
		Pasajero persona;
		Pila* next;
};

#endif
//clases.h
