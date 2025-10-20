#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	int enteros[3][3] = {0};
	int validar=0;
	int k=1;
	int posfila=0;
	int poscolum=0;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			do{
				printf("Introduce el numero %d: ", k++);
				validar = scanf("%d", &enteros[i][j]);
				fflush(stdin);
			}while(validar !=1 || validar <= 0);
		}
	}
	k=1;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("El numero %d es: %d\t", k++,enteros[i][j]);
		}
		printf("\n");
	}
	
		do{
			printf("Dame la fila: ");
			validar = scanf("%d", &posfila);	
			fflush(stdin);
		}while(validar != 1 || posfila < 0 || posfila > 2);
		
		do{
			printf("Dame la caluma: ");
			validar = scanf("%d", &poscolum);
			fflush(stdin);	
		}while(validar !=1 || poscolum < 0 || poscolum >2 );	
		
	printf("\nNumero en la fila %d y columna %d: %d",posfila ,poscolum ,enteros[posfila][poscolum]);
	
	return 0;
}
