#include "librerias.h"

int main() {
	setlocale(LC_CTYPE, "Spanish");
	crear_arch();
	cargarArch();
	registro alumno[tam];
	alta(alumno);
	imprime(alumno);
	imprime_arch();
	actualizarArchivo();
	//getch();
	return 0;
}

//int main() {
//	setlocale(LC_CTYPE, "Spanish");
//	int valor1 = validaEnteros("Introduce el valor 1: ");
//	int valor2 = validaEnteros("Introduce el valor 2: ");
//	int valor3 = validaEnteros("Introduce el valor 3: ");
//	int *pValor1 = &valor1;
//	int *pValor2 = &valor2;
//	int *pValor3 = &valor3;
//	int sum = 0;
//	int multi = 0;
//	int rest = 0;
//		
//	sum = suma(&valor1, &valor2, &valor3);
//	multi = multiplicacion(pValor1, pValor2, pValor3);
//	rest = resta(valor1, valor2, valor3);
//	
//	printf("La suma es: %d\n", sum);
//	printf("La multiplicación es: %d\n", multi);
//	printf("Valor1 = %d - Valor2 = %d - Valor3 = %d\n", valor1, valor2, valor3);
//	printf("La resta es: %d\n", rest);
//
//	return 0;
//}

//int main() {
//	int arreglo[5][2];
//	
//	for(int i=0; i<5; i++){
//		for(int j=0; j<2; j++){
//			printf("Introduce valor para la posicion %d %d", i+1, j+1);
//			arreglo[i][j] = validaEnteros(": ");
//		}
//	}
//	
//	for(int i=0; i<5; i++){
//		printf("\n");
//		for(int j=0; j<2; j++){
//			printf("El numero en posicion %d %d es: %d\n", i+1, j+1, arreglo[i][j]);
//		}
//	}
//	
//	return 0;
//}

//int main(){
//	registros estudiante[tamFila[tamColumna];
//	registros(alumno);
//	getch();
//	retun 0;
//}


