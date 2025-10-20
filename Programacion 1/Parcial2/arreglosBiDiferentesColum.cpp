#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	int enteros[3][3] = {0};
	int validar=0, n=1, posfila=0, poscolum=0, aux=0;
	bool bandera = true, bandera2 = true;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			do{
				printf("Introduce el numero %d: ", n++);
				validar = scanf("%d", &aux);
				fflush(stdin);
				for(int k=0; k<3; k++){
					if(enteros[k][j] == aux){
						bandera2 = false;	
					}
				}
			}while(validar !=1 || validar <= 0);
			if(bandera2)enteros[i][j] = aux;
			else{
				printf("Numero repetido\n");
				n--;
			}
		}
	}
		
	n=1;
	printf("\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("El numero %d es: %d\t", n++,enteros[i][j]);
		}
		printf("\n");
	}
	
		do{
			printf("\nDame la fila: ");
			validar = scanf("%d", &posfila);	
			fflush(stdin);
		}while(validar != 1 || posfila < 0 || posfila > 2);
		
		do{
			printf("Dame la caluma: ");
			validar = scanf("%d", &poscolum);
			fflush(stdin);	
		}while(validar !=1 || poscolum < 0 || poscolum >2 );	
		
	printf("Numero en la fila %d y columna %d: %d",posfila ,poscolum ,enteros[posfila][poscolum]);
	
		do{
			printf("\n\nIntroduce el nuevo numero:");
			validar = scanf("%d", &enteros[posfila][poscolum]);
			fflush(stdin);
		}while(validar != 1 || validar <= 0 );
		
	n=1;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("Nuemeros actualziados %d es: %d\t", n++,enteros[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
