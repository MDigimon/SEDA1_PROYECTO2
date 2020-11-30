#include "animaciones.h"
#include "funciones.h"

void ticket(int n){
	system("cls");
	
	gotoxy(55, 1);
	cout << "COMPRA DE TICKETS" << endl;
	for(int i=0; i < 120; i++)
		cout << "_";
	
	gotoxy(100, 4);
	cout << "     ______";
	
	gotoxy(100, 5);
	cout << "    / ___  \|";
	
	gotoxy(100, 6);
	cout << "   /   \|   \|";
	
	gotoxy(100, 7);
	cout << "   \|___    \|";
	
	gotoxy(100, 8);
	cout << "       \|   \|";
	
	gotoxy(100, 9);
	cout << "    o  \|   \|";
	
	gotoxy(100, 10);
	cout << "  __T__\|   \|";
	
	gotoxy(100, 11);
	cout << " \|         \|";
	
	gotoxy(100, 12);
	cout << " \|_________\|";
	
	caminar(95);
	
	system("pause>>cls");
}


void maletas(int n){
		system("cls");
	
	gotoxy(55, 1);
	cout << "CHEQUEO DE EQUIPAJE" << endl;
	for(int i=0; i < 120; i++)
		cout << "_";
	
	gotoxy(100, 4);
	cout << "    _______";
	
	gotoxy(100, 5);
	cout << "    \|   _   \|";
	
	gotoxy(100, 6);
	cout << "    \|  \|_   \|";
	
	gotoxy(100, 7);
	cout << "    \|  \|_   \|";
	
	gotoxy(100, 8);
	cout << "    \|_______\|";
	
	gotoxy(100, 11);
	cout << "   __________";
	
	gotoxy(100, 12);
	cout << "  \|__________\|";
	
	caminar_maletas(2, 92);
	caminar_maletas(1, 80);
	
	system("pause>>cls");
}


void avion_entrada(int n){
	
	
}


void taxy(int n){
	
	
}
