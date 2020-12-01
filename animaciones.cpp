#include "animaciones.h"
#include "funciones.h"

void principal(){
	cout << endl;
    cout <<"      ____________________________________________________________________________________________" << endl;
    cout <<"     |                                                                                            |" << endl;
    cout <<"     |    ____    _____   ____    _____    _____             _____   ____    _________   _____    |" << endl;
    cout <<"     |   |    |  |       |    \\  |     |  |     | |      |  |       |    \\       |      |     |   |" << endl;
    cout <<"     |   |    |  |       |    /  |     |  |     | |      |  |       |    /       |      |     |   |" << endl;
    cout <<"     |   |____|  |____   |___/   |     |  |_____| |      |  |____   |___/        |      |     |   |" << endl;
    cout <<"     |   |    |  |       |  \\    |     |  |       |      |  |       |  \\         |      |     |   |" << endl;
    cout <<"     |   |    |  |       |   \\   |     |  |       |      |  |       |   \\        |      |     |   |" << endl;
    cout <<"     |   |    |  |_____  |    \\  |_____|  |       |______|  |_____  |    \\       |      |_____|   |" << endl;
    cout <<"     |                                                                                            |" << endl;
    cout <<"     |____________________________________________________________________________________________|  " << endl;
	cout << endl << endl;
}

void ticket(int n, Pasajero *&cola){
	Pasajero *temp;
	temp = cola;
	int i;
	system("cls");
	
	gotoxy(55, 1);
	cout << "COMPRA DE TICKETS" << endl;
	for(i=0; i < 120; i++)
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
	
	for( i=0; i<n; i++){
		gotoxy(0, 14+i);
		cout << i+1 << ".-Nombre: " << temp->nombre;
		temp = temp->next;
		caminar(95-(4*i));
	}
	gotoxy(0, 15+n);
	system("pause>>cls");
	
	temp = cola;
	for( i=0; i<n; i++){
		gotoxy(80, 14+i);
		cout << temp->nombre << " salio de la fila";
		temp = temp->next;
		gotoxy(95-(4*i), 10);
		cout << "    ";
		
		gotoxy(95-(4*i), 11);
		cout << "    ";
		
		gotoxy(95-(4*i), 12);
		cout << "    ";
		
		Sleep(400);
	}
	gotoxy(0, 15+n);
	system("pause>>cls");
}


void maletas(int n, Pasajero *&cola){
	Pasajero *temp;
	int i;
	temp = cola;
	system("cls");
	
	gotoxy(55, 1);
	cout << "CHEQUEO DE EQUIPAJE" << endl;
	for(int i=0; i < 120; i++)
		cout << "_";
	
	gotoxy(100, 4);
	cout << "    ________";
	
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
	
	for( i=0; i<n; i++){
		gotoxy(0, 14+i);
		cout << i+1 << ".-Nombre: " << temp->nombre;
		caminar_maletas(temp->maletas , 94-(12*i));
		temp = temp->next;
	}
	gotoxy(0, 15+n);
	system("pause>>cls");
	
	temp = cola;
	for( i=0; i<n; i++){
		gotoxy(80, 14+i);
		cout << temp->nombre << " accedio a la sala de espera";
		temp = temp->next;
		gotoxy(90-(12*i), 10);
		cout << "            ";
		
		gotoxy(90-(12*i), 11);
		cout << "            ";
		
		gotoxy(90-(12*i), 12);
		cout << "            ";
		
		Sleep(400);
	}
	gotoxy(0, 15+n);
	system("pause>>cls");
}


void avion(int n, Pasajero *&frente){
	Pasajero *temp;
	int i, j;
	temp = frente;
	system("cls");
	
	gotoxy(55, 1);
	cout << "ABORDAR EL AVION" << endl;
	for(int i=0; i < 120; i++)
		cout << "_";
	
	gotoxy(100, 9);
	cout << "    AVION";
	
	gotoxy(100, 9);
	cout << "    _____";
	
	gotoxy(100, 10);
	cout << "   \|     \|";
	
	gotoxy(100, 11);
	cout << "   \|     \|";
	
	gotoxy(100, 12);
	cout << "___\|     \|__";
	
	for( i=0; i<n; i++){
		gotoxy(0, 14+i);
		cout << i+1 << ".- " << temp->nombre << " Entro al Avion";
		temp = temp->next;
		caminar(95-(4*i));
		
		gotoxy(95-(4*i), 10);
		cout << "    ";
		
		gotoxy(95-(4*i), 11);
		cout << "    ";
		
		gotoxy(95-(4*i), 12);
		cout << "    ";
		
		Sleep(400);
	}
	gotoxy(0, 15+n);
	system("pause");
	system("cls");
	
	gotoxy(55, 1);
	cout << "DESABORDAR EL AVION" << endl;
	for(int i=0; i < 120; i++)
		cout << "_";
	
	gotoxy(0, 9);
	cout << "    AVION";
	
	gotoxy(0, 9);
	cout << "    _____";
	
	gotoxy(0, 10);
	cout << "   \|     \|";
	
	gotoxy(0, 11);
	cout << "   \|     \|";
	
	gotoxy(0, 12);
	cout << "___\|     \|__";
	
	for( i=n; i>0; i--){
		temp = frente;
		for(j=1; j<i; j++){
			temp = temp->next;
		}
		gotoxy(0, 14+n-i);
		cout << n+1-i << ".- " << temp->nombre << " Salio del Avion";
		
		caminar2(91);
	
		gotoxy(90, 10);
		cout << "                              ";
	
		gotoxy(90, 11);
		cout << "                              ";
	
		gotoxy(90, 12);
		cout << "                              ";
	
		Sleep(400);
	}
	gotoxy(0, 15+n);
	system("pause>>cls");
	
}


void taxy(int n, Pasajero *&cola){
	Pasajero *temp;
	int i;
	temp = cola;
	system("cls");
	
	gotoxy(55, 1);
	cout << "ENTRAR AL TAXY" << endl;
	for(int i=0; i < 120; i++)
		cout << "_";
		
	gotoxy(100, 9);
	cout << "    ________";
	
	gotoxy(100, 10);
	cout << "   / \|_\| \|_\|\\___";
	
	gotoxy(100, 11);
	cout << "  /             \\";
	
	gotoxy(100, 12);
	cout << "  '--(_)---(_)---'";
	
	for( i=0; i<n; i++){
		gotoxy(0, 14+i);
		cout << i+1 << ".-Nombre: " << temp->nombre;
		caminar_maletas(temp->maletas , 94-(12*i));
		temp = temp->next;
	}
	gotoxy(0, 15+n);
	system("pause>>cls");
	
	temp = cola;
	for( i=0; i<n; i++){
		gotoxy(80, 14+i);
		cout << temp->nombre << " Entro al Taxy";
		temp = temp->next;
		gotoxy(90-(12*i), 10);
		cout << "            ";
		
		gotoxy(90-(12*i), 11);
		cout << "            ";
		
		gotoxy(90-(12*i), 12);
		cout << "            ";
		
		Sleep(400);
	}
	gotoxy(0, 15+n);
	system("pause>>cls");
	
	
}
