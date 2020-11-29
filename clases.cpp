#include "clases.h"

int comprobar(string dato);

void Pasajero::captura(){
	string dato;
	int num, f=1, f2=0;
	
	cout << "Nombre: ";
	getline(cin, dato);
	nombre = dato;
	
	while(f == 1){
		cout << "Numero de maletas [0, 1, 2]: ";
		cin >> dato;
		num = comprobar(dato);
		if(num == -1){
			cout << "----------DATO INCORRECTO---------" << endl;
			do{
				cout << "Desea Continuar Registrando este Pasajero?\n\t [1]Si  [2]No " << endl;
				cin >> dato;
				if(dato == "2"){
					f = 0;
					maletas = -1;
					dato = "1";
				}
				else if(dato != "1"){
					cout << "Otra vez te Equivocaste Compañero" << endl;
					system("pause");
				}
			}while(dato != "2" && dato != "1");
		}
		else{
			if(num > 2){
				cout << "Lleva Demasiadas Maletas" << endl;
				cout << "No Puede Entrar al Avion asi" << endl;
				maletas = -1;
				system("pause");
			}
			else{
				maletas = num;
			}
		}
	}
}

int Pasajero::get_maletas(){
	return maletas;
}
