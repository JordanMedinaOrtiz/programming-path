#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

#define p printf
#define s scanf
#define APROBADO printf("\nFelicidades se ha realizado tu pedido exitosamente") 
#define RECHAZADO printf("\nNo se pudo realizar tu pedido");

int main(){
	setlocale(LC_CTYPE, "Spanish");
	char departamento[20] = " ";
	int provedor=0, cantidad=0, sigue=1, validar=0;
		
	do{
		system("cls");
		p("\nSelecciona el departamento\n");
		
		do{
			p("1.Linea Blanca\n2.Electrónicos\n3.Vinos ");
			validar = s("%i", &provedor);
			fflush(stdin);
		}while(validar <=0 || validar !=1);
		
		do{
			p("Introduce cuantos articulos deseas: ");
			validar = s("%i", &cantidad);
			fflush(stdin);
		}while(validar <=0 || validar !=1);
		
		p("\n-------------------------------");
		
		if(provedor <= 1){
			strcpy(departamento, "Linea Blanca");
			(cantidad > 1000) ? 
			APROBADO :
			RECHAZADO;
		}
		
		if(provedor <= 2 && provedor > 1){
			strcpy(departamento, "Electronicos");
			(cantidad > 2000) ? 
			APROBADO :
			RECHAZADO;
		}
		
		if(provedor <= 3 && provedor > 2){
			strcpy(departamento, "Vinos");
			(cantidad > 1500) ? 
			APROBADO :
			RECHAZADO;
		}
		
		printf("\nDepartamento: %s", departamento);
		p("\nNO.Articulos: %i", cantidad);
		p("\n-------------------------------\n");
		
		do{
			printf("\n\n¿Realizar otro pedido? \n1.Para SI\n2.Para NO ");
			validar = s("%d", &sigue);
			fflush(stdin);
		}while(!(sigue >=1 && sigue <= 2) || validar !=1);
		
		getch();
		fflush(stdin);
			
	}while(sigue == 1);
}
