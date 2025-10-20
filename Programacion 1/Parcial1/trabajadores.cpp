#include <stdio.h>
#include <conio.h>
#include <locale.h>

#define p printf
#define s scanf

int main(){
	setlocale(LC_CTYPE, "spanish");
	char nombre[20]= " ";
	int articulos=0, civil=0;
	float ingreso=0, comision=0, ingresototal=0;
	
	p("Selecciona tu estado civil: \n1.Casado\n2.Soltero ");
	s("%i", &civil);
	p("Ingresa tu nombre: ");
	s("%s", nombre);
	p("¿Cuantos articulos produciste? ");
	s("%i", &articulos);
	p("¿Cual es tu ingreso? ");
	s("%f", &ingreso);
	p("\n-----------------------------------\n");
	
	if(civil<=1){
		if(articulos<140){
			comision=0.015;
		}
		if(articulos>=140 & articulos<=294){
			comision=0.035;
		}
		if(articulos>294){
			comision=0.055;
		}
		p("Estado civil: Casado\n");
	}
	
	if(civil>=2){
		if(articulos<100){
			comision=0.01;
		}
		if(articulos>=100 & articulos<=250){
			comision=0.02;
		}
		if(articulos>=251 & articulos<=350){
			comision=0.03;
		}
		if(articulos>350){
			comision=0.04;
		}
		p("Estado civil: Soltero\n");
	}
	
	p("Nombre: %s\n", nombre);
	p("Ingreso: %.2f\n", ingreso);
	p("Numero de articulos: %i\n", articulos);
	comision= ingreso*comision;
	p("Comision: %.2f\n", comision);
	ingresototal= ingreso + comision;
	p("Tu ingreso total es de: %.2f\n", ingresototal);
	p("-----------------------------------\n");
}
