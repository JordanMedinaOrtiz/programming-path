#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	char cadena[6]="";
	int impares[10] = {0};
	int final[10] = {0};
	int aux=0, multiplicacion=0, valida=0, p=0;
	bool bandera = true;
	
	do{
		printf("Introduce numero para multiplicar: ");
		valida = scanf("%d", &multiplicacion);
		fflush(stdin);
	}while(valida <= 0 || valida != 1);
	
	for(int i=0; i<5; i++){
		while(bandera){
			printf("Introduce numero par %d: ", (i+1));
			scanf("%s", cadena);
			fflush(stdin);
			if(strlen(cadena)>6) continue;
			else{
				for(int j=0; j<strlen(cadena); j++){
					if(isdigit(cadena[j])){
						if(j==(strlen(cadena)-1)){
							aux = atoi(cadena);
							if(!(aux%2==0)){
								impares[i] = aux;
								final[i] = aux*multiplicacion; 
							}
						}
					}
				}
			}	
		}
	}
	printf("Numero a multiplicar: %d", multiplicacion);
	for(int i=0; i==10; i++){
		printf("Par %d: %d", (p+1), impares[i]);
		printf("Resultado %d: %d", (p+1), final[i]);
	}
	
	return 0;
}
