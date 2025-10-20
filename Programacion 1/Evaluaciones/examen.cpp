#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int main(){
	float promedio=0, total=0, validar=0;
	int grado=0, sigue=1;
	char nombre[20] = " ";
	char semestre[20] = " ";
	
	do{
		setlocale(LC_CTYPE, "spanish");
		system("cls");
		printf("Introduce tu nombre: ");
		gets(nombre);
		printf("¿En que semestre te encuentras?\n1.Primeros semestres\n2.Ultimos semestres ");
		scanf("%i", &grado);
		
		do{
			printf("Introduce tu promedio: ");
			validar = scanf("%f", &promedio);	
		}while( !(promedio > 0 && promedio <= 10) || validar !=1 );
		
		if(grado<=1){
			strcpy(semestre, "primeros semestres"); 
			(promedio >= 8 && promedio < 9) ? total = 6000 * 0.10 :
			(promedio >= 9) ? total = 6000 * 0.15 :
			printf("No eres apto para optener una beca :(\n");
		}else{
			strcpy(semestre, "ultimos semestres");
			(promedio >= 7.5 && promedio < 8.5) ? total = 6000 * .15 : 
			(promedio >= 8.5) ? total = 6000 * .20 :
			printf("No eres apto para optener una beca :(\n");
		}
		
		total = 6000 - total;
		
		printf("\nNombre del estudiante: %s\n", nombre);
		printf("Te encuentras en %s\n", semestre);
		printf("Tu promedio es %.2f\n", promedio);
		printf("Tu total a pagar es: %.2f\n", total);
		
		printf("¿Deseas continuar?\n1.Si\n2.No --> ");
		scanf("%i", &sigue);
		fflush(stdin);
		getch();
		
	}while(sigue <= 1);
	
	return 0;
}
