#include <stdio.h>
#include <ctype.h> //isdigit -> retorna cero si no es dígito
#include <string.h> //strlen -> convierte a entero una cadena 
#include <stdlib.h> //atoi -> convierte a entero una cadena
#include <locale.h>

int main(){
	char cadena[6]="";
	bool bandera = true;
	int entero = 0;
	setlocale(LC_CTYPE,"spanish");
	
	while(bandera){
		printf("Número: ");
		scanf("%s", cadena);
		fflush(stdin);
		if(strlen(cadena)>5) continue;
		else{
			for(int i=0; i<strlen(cadena); i++){
				if(isdigit(cadena[i])){
					if(i == (strlen(cadena)-1)){
						entero = atoi(cadena);
						bandera = false;
					}
				}else break;
			}
		}
	}
	printf("El entero es: %d", entero);
	return 0;
}
