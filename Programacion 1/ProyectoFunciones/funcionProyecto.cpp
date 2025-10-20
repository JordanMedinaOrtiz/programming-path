#include "librerias.h"

/*int main(){
	int numero[10] = {0};
	int num = 20;
	
	imprime(numero);
	printf("\n");
	inicializa(numero, num);
	imprime(numero);
	printf("\n");
	printf("\nDentro del main %d\n", num);
	
	inicializaUni(numero);
	imprime(numero);
	
	return 0;
}*/


int main(){
	setlocale(LC_CTYPE,"spanish");
	//Bi calificaciones
	char alumno[5][20] = {""};
	float calf[5][3] = {0};
	float promedio[5] = {0};
	float promGeneral = 0;
	float menor = 0;
	float mayor = 0;
	
	inicializaCalf(alumno, calf, promedio, promGeneral, menor, mayor);
	imprimirCalf(alumno, calf, promedio, promGeneral, menor, mayor);
	
	//Evaluación de arreglos
	int arreglo1[4][3] = {0};
	int arreglo2[4][3] = {0};
	int arreglo3[4][3] = {0};
	int opc = 0;
	
	inicializaEva(arreglo1, arreglo2);
	mediaEva(arreglo1, arreglo2, arreglo3, opc);
	imprimirEva(arreglo1, arreglo2, arreglo3);
	
	return 0;
}
