#include <stdio.h>
#include <conio.h>
#include <locale.h>

#define p printf
#define s scanf
#define APROBADO printf("\nFelicidades se ha realizado tu pedido exitosamente");
#define RECHAZADO printf("\nNo se pudo realizar tu pedido");

int main(){
	setlocale(LC_CTYPE, "Spanish");
	int provedor, cantidad;
	
	p("Selecciona el departamento\n");
	p("1.Linea Blanca\n2.Electrónicos\n3.Vinos\n4.Salir\n");
	s("%i", &provedor);
	p("Introduce cuantos articulos deseas: ");
	s("%i", &cantidad);
	
	if(provedor=1){
		if(cantidad>1000){
			p("\n-------------------------------\n");
			p("Departamento: Linea blanca\n");
			p("NO.Articulos: %i", cantidad);
			APROBADO;
			return 0;
		}
		else{
			RECHAZADO;
			return 0;
		} 
	}
			
	if(provedor=2){
		if(cantidad>2000){
			p("\n------------------------------\n");
			p("Departamento: Electrónicos\n");
			p("NO.Articulos: %i", cantidad);
			APROBADO; 
				return 0;
		}
		else{
			RECHAZADO;
			return 0;
		}
	}
	
	if(provedor=3){
		if(cantidad>1500)
			p("\n------------------------------\n");
			p("Departamento: Vinos\n");
			p("NO.Articulos: %i", cantidad);
			APROBADO;
			return 0;
		if(cantidad<=1500) 
			RECHAZADO;
			return 0;	
	}
	
	if(provedor=4){
		p("Saliste");
		return 0;
	}
	
}
