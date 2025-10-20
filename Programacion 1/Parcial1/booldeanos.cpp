#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

int main(){
	char usuario[10]= " ";
	char pass[5] = " ";
	bool bandera = true;
	int i = 0;
	int intentos = 0;
	
	while(bandera){
		system("cls");
		printf("Dame el usuario: ");
		gets(usuario);
		printf("Dame tu contraseña: ");
		while(i<4){
			pass[i]=getch();
			putchar('*');
			i++;
		}
		
		if(!(strcmp("Jordan", usuario)==0) || !(strcmp("1234", pass)==0)){
			printf("\n\nDatos incorrectos\n");
			getch();
		}
		else{
			bandera = false;
			system("cls");
			printf("\nBienvenid@ %s\n\n", usuario);
		}
		
		if(intentos == 2 && bandera == true){
			printf("\n\nNo autorizado :(");
			return 0;
		}
		
		i=0;
		intentos++;
	}
	
	return 0;
}
