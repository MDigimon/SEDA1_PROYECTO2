#ifndef clases
#define clases

#include <iostream>

using namespace std;

class Pasajero{
	private:
		string nombre;
		int maletas;
	public:
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
