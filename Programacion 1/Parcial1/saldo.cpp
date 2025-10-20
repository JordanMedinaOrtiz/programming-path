#include <stdio.h>
#include <conio.h>
#include <locale.h>

#define p printf
#define s scanf

int main(){
	setlocale(LC_CTYPE,"spanish");
	char nombre[20]= " ";
	float saldo=0, gasto=0, saldof=0, final=0;
	
	p("Introduce tu nombre: ");
	gets(nombre);
	p("Introduce tu saldo: ");
	s("%f", &saldo);
	p("¿Cuanto deseas gastar? ");
	s("%f", &gasto);
	
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
			
	return 0;
}
