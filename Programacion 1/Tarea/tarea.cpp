#include "librerias.h"

int main(){
	setlocale(LC_CTYPE,"spanish");
	printf("Programa saldo:\n");
	float saldo = 0, gasto = 0;
	float *psaldo;
	float *pgasto;
	psaldo = &saldo;
	pgasto = &gasto;
	pedirSaldo(&saldo);
	comprar(&gasto, &saldo);
	printf("\nSaldo final: %.2f", saldo);
	
	printf("\nPrograma beca:\n");
	char nombre;
	char apellidos;
	float promedio = 0;
	pedirDatos(nombre, apellidos, promedio);
	
	printf("\n\nPrograma Etiqueta:\n");
	char cadena[5] = "";
	pedirCadena(cadena);
	
	return 0;
}
