#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	char nombre[20]= " ";
	float calf=0, calft=0, promediog=0;
	int valida=0;

	for(int i=0; i<5; i++){
		printf("Introduce el nombre del alumno %d: ", i+1);
		gets(nombre);
		
		calft=0, calf=0;
		for(int j=0; j<3; j++){
			
			do{
				printf("Introduce la calificación del alumno %d: ", j+1);
				valida = scanf("%f", &calf);	
				fflush(stdin);
			}while(valida !=1 || !(calf >=0 && calf<=10));
			
			calft += calf;
		}
		
		calf = calft/3;
		printf("\nNombre del estudiante: %s\n", nombre);
		printf("Promedio final: %.2f\n\n", calf);
		fflush(stdin);
		promediog += calf;
	}
	calf = promediog/5;
	printf("El promedio general del grupo es: %.2f", calf);
}
