//Jordan Medina Ortiz - 179913
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	int pares[4][3] = {0};
	int impares[4][3] = {0};
	int op[4][3] = {0};
	int validar = 0;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			do{
				printf("Ingresa par [%d][%d]: ", (i+1),(j+1));
				validar = scanf("%d", &pares[i][j]);
				fflush(stdin);
			}while(validar !=1 || !(pares[i][j]%2==0));
		}
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			impares[i][j] = pares[i][j]+1; 
		}
	}
	
	for(int i=0; i<4; i++){
		printf("\n¿Que deseas hacer en la fila %d?\n1.Suma\n2.Resta\n3.Multiplicación\n4.Division ", (i+1));
		scanf("%d", &validar);
		for(int j=0; j<3; j++){
			if(validar==1){
				op[i][j] = pares[i][j] + impares[i][j];
			}
			if(validar == 2){
				op[i][j] = pares[i][j] - impares[i][j];
			}
			if(validar == 3){
				op[i][j] = pares[i][j] * impares[i][j];
			}
			if(validar == 4){
				op[i][j] = pares[i][j] / impares[i][j];	
			}
		}
	}
	
	printf("\nPares:");
	for(int i=0; i<4; i++){
		printf("\n");
		for(int j=0; j<3; j++){
			printf("%d\t", pares[i][j]);
		}
	}
	
	printf("\nImpares:");
	for(int i=0; i<4; i++){
		printf("\n");
		for(int j=0; j<3; j++){
			printf("%d\t", impares[i][j]);
		}
	}
	
	printf("\nOperación:");
	for(int i=0; i<4; i++){
		printf("\nFila %d:\n",(i+1));
		for(int j=0; j<3; j++){
			printf("%d\t", op[i][j]);
		}
	}
	return 0;
}
