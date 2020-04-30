#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void ocultarCursor(){
    HANDLE hCon;
    hCon =  GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 2;
	cci.bVisible = FALSE;

    SetConsoleCursorInfo(hCon, &cci);
}
void gotoxy(int x, int y){
    HANDLE hCon;
    hCon =  GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
	 
    SetConsoleCursorPosition(hCon, dwPos);
}

void legend(int x, int y){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	gotoxy(x,y); cout<<("THE LEGEND OF");
}

void zelda(int x, int y){	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	gotoxy(x,y);		cout<<(" ___________________");
	gotoxy(x,y+1);		cout<<(" |                 /");
	gotoxy(x,y+2);		cout<<(" |  /---------/   /");
	gotoxy(x,y+3);		cout<<(" | /         /   /  _____________. ,________,      ,_______________,      __________©");
	gotoxy(x,y+4);		cout<<(" |/ 	   /   /  |      __     | \\        /      \\               \\      \\         \\");
	gotoxy(x,y+5);		cout<<("           / / /   |     |  \\    |  |      |        |      |\\       \\     |          \\");
	gotoxy(x,y+6);		cout<<("          / / /    |     |   \\   |  |      |        |      | \\       |    |           \\");
	gotoxy(x,y+7);		cout<<("         / / /     |     |_/ |\\  |  |      |        |      | |       |    |    |\\      \\");
	gotoxy(x,y+8);		cout<<("        / / /      |     ___ |      |      |        |      | |       |    |    | \\      \\");
	gotoxy(x,y+9);		cout<<("       / / /       |     |  \\|      |      |        |      | |       |    |    |__\\      \\");
	gotoxy(x,y+10);		cout<<("      / / /        |     |   /  |   |      |    / | |      | |       |    |     ____      \\");
	gotoxy(x,y+11);		cout<<("     /   /         |     |__/   |   |      |__ /  | |      | /      /     |    |    \\      \\");		
	gotoxy(x,y+12);		cout<<("    /   /         /|____________|  /______________|/_______________/      |____|     \\______\\");				
	gotoxy(x,y+13);		cout<<("   /   /_________/ |");				
	gotoxy(x,y+14);		cout<<("  /________________|");
}

void triangulo(int x, int y){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	gotoxy(x,y);  cout<<("          _");
	gotoxy(x,y+1);cout<<("        /   \\"); 	
	gotoxy(x,y+2);cout<<("       /     \\");	
	gotoxy(x,y+3);cout<<("      /       \\");	
	gotoxy(x,y+4);cout<<("     /_________\\  ");  
	gotoxy(x,y+5);cout<<("    / \\       / \\ "); 	
	gotoxy(x,y+6);cout<<("   /   \\     /   \\");  
	gotoxy(x,y+7);cout<<("  /     \\   /     \\");	
	gotoxy(x,y+8);cout<<(" /_______\\ /_______\\");
}

void borrar_triangulo(int x, int y){
	gotoxy(x,y);  cout<<("           ");
	gotoxy(x,y+1);cout<<("             "); 	
	gotoxy(x,y+2);cout<<("              ");	
	gotoxy(x,y+3);cout<<("               ");	
	gotoxy(x,y+4);cout<<("                 	");  
	gotoxy(x,y+5);cout<<("                   "); 	
	gotoxy(x,y+6);cout<<("                   ");  
	gotoxy(x,y+7);cout<<("                    ");	
	gotoxy(x,y+8);cout<<("                     ");
}

void iniciar(int x, int y){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	gotoxy(x,y);
	cout<<"       PRESIONA ENTER";
	
}

void borrar_iniciar(int x, int y ){
	gotoxy(x,y);
	cout<<"                               ";
}
void pintar_limites(int x, int y){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
	for(int i=1; i<60; i++){
		gotoxy(i+44,16); printf("%c",205);
		gotoxy(i+44,32); printf("%c",205);
	}
	
	for(int i=2; i<18; i++){
		gotoxy(44,i+15); printf("%c",186);
		gotoxy(104,i+15); printf("%c",186);

	}
	
	gotoxy(44,16); printf("%c",201);
	gotoxy(44,32); printf("%c",200);
	gotoxy(104,16); printf("%c",187);
	gotoxy(104,32); printf("%c",188);
}

void menu(int x, int y){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	gotoxy(x+3,y); cout<<"MENU";
	gotoxy(x+2,y+2); cout<<"1.- JUGAR";
	gotoxy(x+2,y+4); cout<<"2.- INSTRUCCIONES";
	gotoxy(x+2,y+6); cout<<"3.- CREDITOS";
	gotoxy(x+2,y+8); cout<<"4.- SALIR";	
}


int main(){
	
	ocultarCursor();
	legend(45,5);
	zelda(23,3);
	triangulo(62, 17);

	iniciar(57,29);
	if(kbhit){
		int x,y;
		char tecla = getch();
			pintar_limites(x,y);
			borrar_triangulo(62, 17);
			borrar_iniciar(57,29);
			menu(64, 18);
		
	}
	
	getch();
}
