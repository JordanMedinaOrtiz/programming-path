#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	char nombre[20] = " ", estados[8]= " ";
	int estado=0, sigue=1, articulos=0, validar=0;
	float ingreso=0, comision=0, total=0;
	
	do{
		system("cls");
		printf("Nombre: ");
		gets(nombre);
		
		do{
			printf("\nEstado civil.\n1.Casado\n2.Soltero\n");
			validar = scanf("%d", &estado);
			fflush(stdin);
		}while(validar <=0 || validar !=1);
		
		do{
			printf("\nIngreso: ");
			validar = scanf("%f", &ingreso);
			fflush(stdin);
		}while(validar <=0 || validar !=1);
		
		do{
			printf("Artículos producidos: ");
			validar = scanf("%d", &articulos);
			fflush(stdin);
		}while(validar <=0 || validar !=1);
		
		if(estado=1){
			strcpy(estados, "Casado");
			(articulos < 140)? comision = ingreso*.015 : 
			(articulos >= 140 && articulos <= 294)? comision = ingreso*.035 : 
			(articulos > 294)? comision = ingreso*.055 : 
			comision = 0;
		}else{
			if(estado==2){
				strcpy(estados, "Soltero");
				articulos < 100 ? comision = ingreso *.01 : 
				articulos >=100 && articulos <=250 ? comision = ingreso*0.2 : 
				articulos >=251 && articulos <=350 ? comision = ingreso*0.3 :
				articulos >350 ? comision = ingreso*.4 : 
				comision = 0;
			}
			else printf("\n\nValor incorrecto para estado. ");
		}
		
		total = ingreso + comision;
		printf("\nNombre %s", nombre);
		printf("\nEstado civil: %s", estados);
		printf("\nIngresos: %.2f", ingreso);
		printf("\nArticulos producidos: %d", articulos);
		printf("\nComisión: %.2f", comision);
		printf("\nTotal: %.2f", total);
		
		do{
			printf("\n\nVolver a ejecutar: \n1.Para SI\nOtro.Para NO ");
			validar = scanf("%d", &sigue);
			fflush(stdin);
		}while(!(sigue >=1 && sigue <= 2) || validar !=1);
		
		getch();
	}while(sigue == 1);
	return 0;
}
