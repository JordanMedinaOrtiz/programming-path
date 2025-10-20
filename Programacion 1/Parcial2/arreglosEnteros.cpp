#include <stdio.h>
#include <conio.h>

int main(){
	//int enteros[6] = {0};
	//int enteros[] = {1, 13, 6, 7, 10, 54};
	//int enteros[6] = {1, 13, 6, 7, 10, 54};
	int enteros[6];
	enteros[0] = 1;
	enteros[1] = 13;
	enteros[2] = 6;
	enteros[3] = 7;
	enteros[4] = 10;
	enteros[5] = 54;
	
	for(int i=0; i<6; i++){
		printf("%d\t", enteros[i]);
	}
	
	for(int i=0; i<6; i++){
		printf("\nEscribe un numero: ");
		scanf("%d", &enteros[i]);
		fflush(stdin);
	}
	
	printf("\nImprimiendo los numeros sin for :(\n");
	printf("%d\t", enteros[0]);
	printf("%d\t", enteros[1]);
	printf("%d\t", enteros[2]);
	printf("%d\t", enteros[3]);
	printf("%d\t", enteros[4]);
	printf("%d\t", enteros[5]);
	
	getch();
	
}
