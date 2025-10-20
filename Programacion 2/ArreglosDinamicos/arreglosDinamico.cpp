#include "librerias.h";

/*int main(){
	int n, *x = NULL;
	n = validaEntero("Num: ");
	cout<<endl;
	
	//El tamaño de bytes que se desean reservar se obtine con sizeof
	x = (int * ) malloc (n * sizeof(int));
	//Variable = (conversión al tipo) reservar (elementos * cantidad de espacio (según el tipo))
	inicializa1(n,x);
	imprime(n,x);
	inicializa2(n,x);
	imprime(n,x);
	free(x);
	getch();
	
	return 0;
}*/

/*int main(){
	FILE *arch;
	
	int **enteros = NULL;
	int f = validaEntero("Filas: ");
	int c = validaEntero("Columnas: ");
	
	enteros = (int**) malloc (f * sizeof(int *));
	for(int i=0; i<f; i++){
		*(enteros + i) = (int *) malloc (c*sizeof(int));
		//enteros[i] = (int*) malloc (x *sezeof
	}
	inicializa_arreglo(enteros, f, c);
	imprime_arreglo(enteros, f, c);
	free(enteros);
	getch();
	return 0;
}*/

/*int main(){
	FILE *arch;
	int **enteros = NULL;
	int f = validaEntero("Filas: ");
	int c = 0;
	int colum[f] = {0};
	enteros = (int**) malloc (f * sizeof(int *));
	for(int i=0; i<f; i++){
		c = validaEntero("Columnas: ");
		colum[i] = c;
		*(enteros + i) = (int *) malloc (c*sizeof(int));
		//enteros[i] = (int*) malloc (c * sizeof(int));
	}
	inicializa_arregloV2(enteros, f, colum);
	imprime_arregloV2(enteros, f, colum);
	free(enteros);
	getch();
	return 0;
}*/

/*int main(){
	column = validaEntero("No. Registros: ");
	Ejemplo *dato = (Ejemplo*) malloc (column * sizeof(Ejemplo));
	
	recibeDinamicoU(dato);
	imprimeDinamicoU(dato);
	free(dato);
	
	return 0;
}*/

/*int main(){
	row = validaEntero("No. Apuntadores: ");
	Ejemplo **dato = (Ejemplo **) malloc (row * sizeof(Ejemplo *));
	
	recibeDinamicoB(dato);
	imprimeDinamicoB(dato);
	free(dato);
	
	return 0;
}*/

int main(){
	srand(time(NULL));
	row = validaEntero("No. Apuntadores: ");
	Registro **reg = (Registro **) malloc (row * sizeof(Registro *));
	
	registroDocente(reg);
	imprimeDocente(reg);
	free(reg);
	
	return 0;
}
