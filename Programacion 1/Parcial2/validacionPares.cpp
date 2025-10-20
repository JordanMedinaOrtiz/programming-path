#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	char cadena[6]="";
	int entero[10] = {0};
	int aux=0;
	bool bandera = true;
	
		while(bandera){
		printf("Introduce un numero par: ");
		scanf("%s", cadena);
		
		if(strlen(cadena)>6) continue;
		else{ 
			for(int j=0; j<strlen(cadena); j++){
				if(isdigit(cadena[j])){
					if(j==(strlen(cadena)-1)){
						aux = atoi(cadena);	
						if(aux%2==0){
							printf("Numero par: %d\n", aux);
						}
					}
				}
			}		
		}
	}
	return 0; 

}
