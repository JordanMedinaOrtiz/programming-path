#include <stdio.h>
#include <locale.h>
#include <string.h>

//Funcion A
float flotante(float);
int doble(int);

//Funcion B
char caracter(char[]);
int entero(int);

//Funcion C
char cadena(char[]);
int suma(int, int, int, int, int);

//Funcion D
float dobles(double, double);

//Funcion E
float promedio(float, float, float);

int main(){
	setlocale(LC_CTYPE,"spanish");
	int valor1 = 0;
	int valor2 = 0;
	char valor3[30] = "Feliz cumpleaños";
	int valor4 = 14;
	char valor5[] = " ";
	int valor6 = 10, valor7 = 20, valor8 = 30, valor9 = 40, valor10 = 15;
	double valor11 = 10.5, valor12 = 20;
	float valor13 = 10, valor14 = 8.5, valor15=8; 
	
	printf("Funcion A:\n");
	printf("\nEl valor del flotante fuera de la funcion es: %.2f", flotante(valor1));
	printf("El doble es: %d", doble(valor2));
	
	printf("\n\nFuncion B:\n");
	caracter(valor3);
	entero(valor4);
	
	printf("\n\nFuncion C:\n");
	cadena(valor5);
	printf("La funcion es: %s", cadena(valor5));
	printf("La suma de 5 enteros son: %d", suma(valor6, valor7, valor8, valor9, valor10));
	
	printf("\n\nFuncion D:\n");
	printf("La multiplicacion es: %.2f", dobles(valor11, valor12));
	
	printf("\n\nFuncion E:\n");
	printf("El promedio es: %.2f", promedio(valor13, valor14, valor15));
	
	return 0;
}

//Funcion A
float flotante(float dato1){
	printf("Introduce el valor flotante: ");
	scanf("%f", &dato1);
	printf("El valor del flotante dentro de la funcion es: %.2f", dato1);
	
}

int doble(int dato2){
	printf("\nIntroduce el valor entero: ");
	scanf("%d", &dato2);
	int doble = dato2 * 2;
	return doble;
}

//Funcion B
char caracter(char valor3[]){
	printf("El caracter es: %s", valor3); 
}

int entero(int valor4){
	printf("\nEl entero es: %d", valor4);
}

//Funcion C
char cadena(char valor5[]){
	printf("Introduce la cadena: ");
	scanf("%s", valor5);
	printf("La cadena es: %s\n", valor5);
}

int suma(int dato6, int dato7, int dato8, int dato9, int dato10){
	int suma = dato6 + dato7 + dato8 + dato9 + dato10;
	return suma;
}

//Funcion D
float dobles(double dato11, double dato12){
	float multiplicacion = dato11 * dato12;
	return multiplicacion;
}


//Funcion E
float promedio(float dato13, float dato14, float dato15){
	float promedios = (dato13 + dato14 + dato15) / 3;
	return promedios;
}
