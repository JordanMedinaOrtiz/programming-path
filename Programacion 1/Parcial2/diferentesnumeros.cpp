#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	bool bandera = true;
	bool bandera2 = true;
	char cadena[6]="";
	int enteros[10] = {0};
	int aux=0;
	setlocale(LC_CTYPE,"spanish");
	
	for(int i=0; i<10; i++){
		while(bandera){
			printf("Introduce numeros diferentes %d: ", (i+1));
			scanf("%s", cadena);
			if(strlen(cadena)>6) continue;
			else{
				for(int j=0; j<strlen(cadena); j++){
					if(isdigit(cadena[j])){
						if(j==(strlen(cadena)-1)){
							aux = atoi(cadena);	
							for(int k=0; k<10; k++){
								if(enteros[k] == aux) bandera2 = false;	
							}
							if(bandera2){
								enteros[i] = aux;
								bandera = false;
							}
						}
					}
				}	
			}
		}
		bandera = true;
	}
	return 0;
}
