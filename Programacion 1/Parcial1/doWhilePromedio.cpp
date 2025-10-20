#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	char sigue[8];
	int valida=0;
	float calificacion1=0, calificacion2=0, calificacion3=0, promedio=0;
	
	do{
		system("cls");
		do{
			printf("Calificación 1: ");
			valida = scanf("%f", &calificacion1);
			fflush(stdin);
		}while(valida <=0 || valida !=1);
		
		do{
			printf("Calificación 2: ");
			valida = scanf("%f", &calificacion2);
			fflush(stdin);
		}while(valida <=0 || valida !=1);
		
		do{
			printf("Calificación 3: ");
			valida = scanf("%f", &calificacion3);
			fflush(stdin);
		}while(valida <=0 || valida !=1);
		
		promedio=(calificacion1 + calificacion2 + calificacion3)/3;
		
		((promedio>=7) && (promedio <8))?
			printf("\nPromedio: %.2f Puedes Mejorar!!", promedio) :
			((promedio>=8) && (promedio<=9))?
				printf("\nPromedio: %.2f Muy Bien!!", promedio) :
					((promedio>9) && (promedio<=10))?
						printf("\nPromedio: %.2f Excelente!!", promedio) :
							printf("\nPromedio: %.2f Necesitas estudiar!!", promedio);
		getch();
		printf("\n\n\nDeseas volver a ejecutar...\nSI\nNO\n");
		fflush(stdin);
		scanf("%s", sigue);
	}while(strcmp(sigue, "SI")==0);
	
	return 0;
}
