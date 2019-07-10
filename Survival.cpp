#include<highinclude1>
#include "Variables"
#include "Funciones"
#include "Menu"
int main(){
	InicializarInventario();
	DeclararInventario();
	while(true){
		if(Food<=0){
			Food=0;	
			HP--;
		}
		if(HP<=0){
			system("cls");
			cout<<"GAME OVER";
			getch();
			exit(0);
		}
		MENU();
		if(HP<=0){
			system("cls");
			cout<<"GAME OVER";
			getch();
			exit(0);
		}
	}
	
	getch();
	return 0;
}
