#include "funciones.h"

void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
}  

void caminar(){
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

void caminar_maletas(int m){
	int ban=0;
	for(int i=0;i<50;i++){
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
	system("pause>>cls");
}
