#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

#define p printf
#define s scanf

int main(){
	setlocale(LC_CTYPE,"spanish");
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);	
	
	char nombre[20]= " ";
	int sigue=1;
	float saldo=0, gasto=0, saldof=0, final=0, validar=0;
	
	do{
		system("cls");
		p("Introduce tu nombre: ");
		gets(nombre);
		
		do{
			p("Introduce tu saldo: ");
			validar = s("%f", &saldo);
			fflush(stdin);	
		}while(validar <=0 || validar !=1);
		
		do{
			p("¿Cuanto deseas gastar? ");
			s("%f", &gasto);
			fflush(stdin);	
		}while(validar <=0 || validar !=1);	
		
		saldof= saldo-gasto;
		
		p("\n------------------------------\n");
		p("Bienvenid@ %s\n", nombre);
		p("Tu saldo es de: %.2f\n", saldo);
		p("A gastar: %.2f\n", gasto);
		
		if(saldo>=gasto){
			p("Saldo final: %.2f", saldof);	
		}else{
			p("No tienes saldo suficiente :(");		
		}
		
		p("\n------------------------------\n");
		
		do{
			printf("\n\nVolver a ejecutar: \n1.Para SI\nOtro.Para NO ");
			validar = scanf("%d", &sigue);
			fflush(stdin);
		}while(!(sigue >=1 && sigue <= 2) || validar !=1);
		getch();
		fflush(stdin);
	}while(sigue == 1);
	
	return 0;
}
