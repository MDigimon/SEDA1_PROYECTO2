#include "funciones.h"

void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}  
void taxy(){
	system("cls");
	int ban=0;
	for(int i=0;i<50;i++){
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
	system("pause>>cls");
}
//funciones.cpp
