#include <stdio.h>
#include <ctype.h> //isdigit -> retorna cero si no es dígito
#include <string.h> //strlen -> convierte a entero una cadena 
#include <stdlib.h> //atoi -> convierte a entero una cadena
#include <locale.h>

int main(){
	char cadena[6]="";
	bool bandera = true;
	float flotante = 0;
	int cont=0;
	
	while(bandera){
		printf("Flotante: ");
		scanf("%s", cadena);
		fflush(stdin);
		if(strlen(cadena)>5) continue;
		else{
			for(int i = 0; i < strlen(cadena); i++){
				if( !(isdigit(cadena[i])) ){
					if(cadena[i] == '.' && cont == 0){
						cont++;
					}else{
						cont = 0;
						break;
					}
				}
				if( i == (strlen(cadena)-1)){
					flotante = atof(cadena);
					bandera = false;
				}
			}
		}
	}
	printf("El flotante es: %.2f \n", flotante);
	return 0;
}
