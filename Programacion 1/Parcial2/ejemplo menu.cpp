#include <windows.h>
#include <conio.h>
#include <stdio.h>

int main(){
	//Funci�n para ajustar el tama�on de la pantalla
	system("mode con: cols=140 lines=100");
	char tecla = '\0'; //' ' == null;
	
	do{
		if(kbhit()){
			tecla = getch();
			printf("%d\t", tecla);
		}
	}while(tecla!=13);
	
	return 0;
}
