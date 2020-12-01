#include "funciones.h"
#include "clases.h"

void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
};

void caminar(int x){
	int ban=0;
	for(int i=0;i<x;i++){
		gotoxy(i,10);cout<< "  o";
		gotoxy(i,11); cout<< " /| \\";
		if(ban==0){
			gotoxy(i,12); cout<< " / ";
			ban=1;
		}else{
			gotoxy(i,12); cout<< "   \\";
			ban=0;
		}
		Sleep(100);
		
	}
	gotoxy(x,10);cout<< "  o";
	gotoxy(x,11); cout<< " /|\\";
	gotoxy(x,12); cout<< "  \|\\ ";
};

void caminar2(int x){
	int ban=0;
	for(int i=13;i<x+13;i++){
		gotoxy(i,10);cout<< "  o";
		gotoxy(i,11); cout<< " /| \\";
		if(ban==0){
			gotoxy(i,12); cout<< " / ";
			ban=1;
		}else{
			gotoxy(i,12); cout<< "   \\";
			ban=0;
		}
		Sleep(100);
		
	}
	gotoxy(x,10);cout<< "  o";
	gotoxy(x,11); cout<< " /|\\";
	gotoxy(x,12); cout<< "  \|\\ ";
};

void caminar_maletas(int m, int x){
	int ban=0;
	for(int i=0;i<x;i++){
		if(m > 1 && i >4){
			gotoxy(i-4,11); cout<< "  _T";
			gotoxy(i-4,12); cout<< " |_|";
		}
		gotoxy(i,10); cout<< "  o";
		gotoxy(i,11); cout<< " /|\\";
		if(ban==0){
			gotoxy(i,12); cout<< " / ";
			ban=1;
		}else{
			gotoxy(i,12); cout<< "   \\";
			ban=0;
		}
		if(m > 0){
			gotoxy(i+4,11); cout<< " T_";
			gotoxy(i+4,12); cout<< " |_|";
		}
		Sleep(100);
	}
	if(m > 1){
		gotoxy(x-4,11); cout<< "  _T";
		gotoxy(x-4,12); cout<< " |_|";
	}
	gotoxy(x,10); cout<< "  o";
	gotoxy(x,11); cout<< " /|\\";
	gotoxy(x,12); cout<< " /\| ";
	if(m > 0){
		gotoxy(x+4,11); cout<< " T_";
		gotoxy(x+4,12); cout<< " |_|";
		}
};

int comprobar(string dato){
	int num;
	for(int i=0; i < dato.size(); i++){
		if(isdigit(dato[i]) == 0){
			if((int)dato[i] != 0){
				return -1;
			}
		}		
	}
	istringstream(dato) >> num;
	return num;
};

int vacia(Pasajero* frente){
	if(frente == NULL){
		return 1;
	}
	return 0;
};

void captura(Pasajero *&frente, Pasajero *&fin){
	string a, dato;
	int num, f=1, f2=0;
	
	cout << "Nombre: ";
	getline(cin, a);
	fflush(stdin);
	
	while(f == 1){
		cout << "Numero de maletas [0, 1, 2]: ";
		cin >> dato;
		fflush(stdin);
		num = comprobar(dato);
		if(num == -1){
			cout << "----------DATO INCORRECTO---------" << endl;
			do{
				cout << "Desea Continuar Registrando este Pasajero?\n\t [1]Si  [2]No " << endl;
				cin >> dato;
				if(dato == "2"){
					f = 0;
					frente->maletas = -1;
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
				frente->maletas = -1;
				system("pause");
			}
			else{
				agregar_cola(frente, fin, a, num);
				f=0;
			}
		}
	}
}



void agregar_cola(Pasajero *&frente, Pasajero *&fin, string a, int b){
	Pasajero *nuevo = new Pasajero();
	nuevo->nombre = a;
	nuevo->maletas = b;
	nuevo->next = frente;
	if(vacia(frente) == 1){
		frente = nuevo;
	}
	else{
		fin->next = nuevo;
	}
	fin = nuevo;
};

int pasajeros(){
	string dato;
	int num;
	cout << "\t\tNumero de Pasajeros: ";
	cin >> dato;
	fflush(stdin);
	
	num = comprobar(dato);
	if(num == -1){
		cout << "Dato Incorrecto" << endl;
		system("pause");
		return -1;
	}
	else if(num == 0){
		cout << "El Vuelo no Puede Llevar 0 Pasajeros" << endl;
		system("pause");
		return -1;
	}
	else if(num > 10){
		cout << "El Vuelo Lleva Demasiados Pasajeros" << endl;
		system("pause");
		return -1;
	}
	else{
		return num;
	}
	
}

int vuelo(){
	string opc;
	while(true){
		cout << "Desea Capturar un Nuevo Numero de Pasajeros para un Nuevo Vuelo?" << endl;
		cout << "\t\t[1]Si   [2]No" << endl << "\t\t  ";
		getline(cin, opc);
		fflush(stdin);
		if(opc == "1"){
			return 1;
		}
		else if(opc == "2"){
			return 0;
		}
	}
}
