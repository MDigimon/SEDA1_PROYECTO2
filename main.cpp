#include <iostream>


#include "funciones.h"
#include "clases.h"
#include "animaciones.h"

using namespace std;

int main(){
	int p, f=1;
	string opc;
	Pasajero *frente = NULL, *fin = NULL;
	
	while(f == 1){
		system("cls");
		principal();
		p=pasajeros();
		if(p != -1){
			for(int i=0; i<p; i++){
				captura(frente, fin);
			}
			
			ticket(p, frente);
			maletas(p, frente);
			avion(p, frente);
			taxy(p, frente);
			f = 0;
		}
		else{
			if(vuelo() == 0){
				f = 0;
			}
		}
	}
	
	return 0;
}

