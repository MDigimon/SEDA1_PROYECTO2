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
	gotoxy(x,11); cout<< " /| \\";
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

int vacia(Cola* frente){
	if(frente == NULL){
		return 1;
	}
	return 0;
};

void agregar_cola(Cola *&frente, Cola *&fin, Pasajero p){
	Cola *nuevo = new Cola();
	nuevo->persona = p;
	nuevo->next = frente;
	if(vacia(frente) == 1){
		frente = nuevo;
	}
	else{
		fin->next = nuevo;
	}
	fin = nuevo;
};

void eliminar_cola(Cola *&frente, Cola *&fin){
	Cola *aux = frente;
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->next;
	}
	delete(aux);
};

void agregar_pila(Pila *&pila, Pasajero n){
	Pila *temp = new Pila();
	temp->persona = n;
	temp->next = pila;
	pila = temp;
};

void eliminar_pila(Pila *&pila){
	Pila *temp = pila;
	pila = temp->next;
	delete(temp);
};
