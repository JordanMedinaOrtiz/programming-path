#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	char cadena[6]="";
	bool bandera = true;
	int enteros;
	setlocale(LC_CTYPE,"spanish");
	
	for(int i=0; i<10; i++){
		while(bandera){
			printf("Número: ");
			scanf("%s", cadena);
			fflush(stdin);
			if(strlen(cadena)>5) continue;
			else{
				for(int j=0; j<strlen(cadena); j++){
					if(isdigit(cadena[j])){
						if(j == (strlen(cadena)-1)){
							enteros = atoi(cadena);
							bandera = false;
						}
					}else break;
				}
			}
		}
		bandera = true;
	}
	printf("El ultimo entero es: %d", enteros);
	return 0;
}
