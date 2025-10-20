#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "locale.h"

int main(){
	setlocale(LC_ALL,"spanish");
	srand(time(NULL));
	int filas=0, columnas=0;
	
	printf("Introduce numero de filas: ");
	scanf("%d", &filas);
	printf("Introduce numero de columnas: ");
	scanf("%d", &columnas);
	printf("\n\n");
	
	char arreglo[filas][columnas];
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			arreglo[i][j] = 'A' + rand() % 26;
		}
	}
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			printf("%c\t", arreglo[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	for(int i=filas-1; i>=0; i--){
		for(int j=columnas-1; j>=0; j--){
			printf("%c\t", arreglo[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
