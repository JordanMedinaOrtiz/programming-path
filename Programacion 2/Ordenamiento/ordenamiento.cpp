#include "librerias.h"

/*
int main(){
	setlocale(LC_ALL,"spanish");
	c= validaEntero("No. Registros: ");
	Datos *reg = (Datos*)malloc(c * sizeof(Datos));

	recibeU(reg);
	imprimeU(reg);
	ordenaSeleccionU(reg);
	imprimeU(reg);
	free(reg);

	return 0;
}*/

/*
int main(){
	setlocale(LC_ALL,"spanish");
	f = validaEntero("No. Registros: ");
	Datos **reg;
	reg = (Datos **)malloc(f * sizeof(Datos *));

	for(int i=0; i<f; i++){
		*(reg+i) = (Datos *)malloc(sizeof(Datos));
	}

	recibeB1(reg);
	imprimeB1(reg);
	ordenaSeleccionB1(reg);
	imprimeB1(reg);
	free(reg);

	return 0;
}*/


/*
int main(){
	setlocale(LC_ALL,"spanish");
	f = validaEntero("NO. Fila Apuntadores: ");
	Datos **reg = (Datos **)malloc(f * sizeof(Datos *));

	recibeB2(reg);
	ordenaSeleccionB2(reg);
	imprimeB2(reg);
	free(reg);

	return 0;
}*/

int main(){
//	setlocale(LC_ALL,"spanish");
	f = validaEntero("NO. Fila Apuntadores: ");
	Datos **reg = (Datos **)malloc(f * sizeof(Datos *));

	recibeTarea(reg);
	seleccion(reg);
	free(reg);	

	return 0;
}
