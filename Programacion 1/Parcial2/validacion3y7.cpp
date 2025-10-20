#include <stdio.h>
#include <ctype.h> //isdigit -> retorna cero si no es dígito
#include <string.h> //strlen -> convierte a entero una cadena 
#include <stdlib.h> //atoi -> convierte a entero una cadena
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	char enteros[9]="";
	bool bandera = true;
	int entero=0, contador7=0, contador3=0;
	
	while(bandera){
		contador3=0;
		printf("Introduce un numero de hasta 9 digitos con minimo un 3 y un 7: ");
		scanf("%s", enteros);
		
		if(strlen(enteros)>9) continue;
		else{ 
			for(int i = 0; i<strlen(enteros); i++){
				if(enteros[i] == '3'){ 
					contador3++;
				}
				if(enteros[i] == '7'){
					contador7++;
				}
				if(contador3 >= 1 && contador7 >=1){
					if(isdigit(enteros[i])){
						if(i == (strlen(enteros)-1)){
							entero = atoi(enteros); 
							bandera = false;
						}
					}else break;
				}
			}
		}
	}
	printf("\n\nEl numero es: %d", entero);
	return 0; 
}
