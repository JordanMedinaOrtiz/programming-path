#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	int seguir=0, numero=0, puesto=0, domingos=0;
	float salario=0, doble=0;
	char nombre[20]= " ";
	char trabajo[20]= " ";
	
	do{
		printf("Introduce numero de empleado: ");
		scanf("%d", &numero);
		fflush(stdin);
		printf("Introduce nombre del empleado: ");
		gets(nombre);
		fflush(stdin);
		printf("Introduce tu puesto:\n1.Gerente\n2.Empleado de confianza\n3.Operario ");
		scanf("%d", &puesto);
		fflush(stdin);
		printf("Introduce tu salario diario: ");
		scanf("%f", &salario);
		fflush(stdin);
		
		if(puesto<=1){
			strcpy(trabajo, "Gerente");
			salario = salario*15;
		}
		if(puesto>=2){
			strcpy(trabajo, "Empleado de confianza");
			salario = salario*15+2000;
		}
		if(puesto>=3){
			strcpy(trabajo, "Operario");
			printf("¿Cuantos domingos trabajas, 1 o 2? ");
			scanf("%d", &domingos);
			fflush(stdin);
			if(domingos<=1){
				doble = salario*2;
				salario = salario*15+doble;
			}else{
				doble = salario*4;
				salario = salario*15+doble;
			}
		}
		printf("---------------------------");
		printf("\nNumero de empleado: %d", numero);
		printf("\nNombre del empleado: %s", nombre);
		printf("\nPuesto del empleado: %s", trabajo);
		printf("\nSalario final: %.2f", salario);
		printf("\n---------------------------\n");
		
		printf("¿Deseas seguir?\n1.Si\n2.No ");
		scanf("%d", &seguir);
		system("cls");
	}while (seguir<=1);
	
	return 0;
}
