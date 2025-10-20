#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int arreglo[3][3] = {0};

int main(){
	srand(time(NULL));
	int aux=0, auxInt = 0, auxCasas = 1;
	
	
	for(int i=0; i<3; i++){
		aux = rand() % 3 + 0;
		for(int j=0; j<3; j++){
			auxInt = auxInt + 1;
			arreglo[i][j] = auxInt;
			arreglo[i][aux] = 0;
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d\t", arreglo[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nCasa: \tVecinos: \n");
	
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(arreglo[i][j] == 1){
				printf("1\t");
				if(arreglo[i+1][j] == 0 && arreglo[i][j+1] == 0){
					printf("N/A\n");
				}else printf("%d, %d\n", arreglo[i+1][j], arreglo[i][j+1]);
			}
			if(arreglo[i][j] == 2){
				printf("2\t");
				if(arreglo[i+1][j] == 0 && arreglo[i][j-1] == 0 && arreglo[i][j+1] == 0){
					printf("N/A\n");
				}else printf("%d, %d, %d\n", arreglo[i+1][j], arreglo[i][j-1] ,arreglo[i][j+1]);
			}
			if(arreglo[i][j] == 3){
				printf("3\t");
				if(arreglo[i+1][j] == 0 && arreglo[i][j-1] == 0){
					printf("N/A\n");
				}else printf("%d, %d\n", arreglo[i+1][j], arreglo[i][j-1]);
			}
			if(arreglo[i][j] == 4){
				printf("4\t");
				if(arreglo[i-1][j] == 0 && arreglo[i+1][j] == 0 && arreglo[i][j+1] == 0){
					printf("N/A\n");
				}else printf("%d, %d, %d\n", arreglo[i-1][j], arreglo[i+1][j], arreglo[i][j+1]);
			}
			if(arreglo[i][j] == 5){
				printf("5\t");
				if(arreglo[i-1][j] == 0 && arreglo[i+1][j] == 0 && arreglo[i][j-1] == 0 && arreglo[i][j+1]){
					printf("N/A\n");
				}else printf("%d, %d, %d, %d\n", arreglo[i-1][j], arreglo[i+1][j], arreglo[i][j-1], arreglo[i][j+1]);
			}
			if(arreglo[i][j] == 6){
				printf("6\t");
				if(arreglo[i-1][j] == 0 && arreglo[i+1][j] == 0 && arreglo[i][j-1] == 0){
					printf("N/A\n");
				}else printf("%d, %d, %d\n", arreglo[i-1][j], arreglo[i+1][j], arreglo[i][j-1]);
			}
			if(arreglo[i][j] == 7){
				printf("7\t");
				if(arreglo[i-1][j] == 0 && arreglo[i][j+1] == 0){
					printf("N/A\n");
				}else printf("%d, %d\n", arreglo[i-1][j], arreglo[i][j+1]);
			}
			if(arreglo[i][j] == 8){
				printf("8\t");
				if(arreglo[i-1][j] == 0 && arreglo[i][j-1] == 0 &&arreglo[i][j+1] == 0){
					printf("N/A\n");
				}else printf("%d, %d, %d\n", arreglo[i-1][j], arreglo[i][j-1], arreglo[i][j+1]);
			}
			if(arreglo[i][j] == 9){
				printf("9\t");
				if(arreglo[i-1][j] == 0 && arreglo[i][j-1]){
					printf("N/A\n");
				}else printf("%d, %d\n", arreglo[i-1][j], arreglo[i][j-1]);
			}
		}
	}
	
}
