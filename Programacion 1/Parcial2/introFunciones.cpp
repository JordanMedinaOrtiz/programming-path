#include <stdio.h>
#include <locale.h>
#include <string.h>

//Prototipos: contiene parámetros formales
void saludar(char []);
int sumar(int, int);
void preguntar(char [], char []);

/*
Void saludar(char nombre[])
int sumar(int a, int b);
void preguntar(char cadena[], char nombre[]); 
*/

int main(){
	setlocale(LC_CTYPE,"spanish");
	char nombre[20] = "Guadalupe";
	int valor1 = 20, valor2 = 30;
	char pregunta1[] = "Dame tu edad: ";
	char pregunta2[] = "Dame un mensaje positivo... ";
	
	//Llamadas/Invocación: Contiene parámetros reales
	saludar(nombre);
	printf("\n");
	printf("Nombre: %s", nombre);
	printf("La suma es: %d", sumar(valor1, valor2));
	printf("\nValor 1 = %d -- Valor 2 = %d", valor1, valor2);
	printf("\n");
	preguntar(pregunta1, pregunta2);
	
	return 0;
}

//Cuerpo/Implementación
void saludar(char nombre[]){
	printf("Hola %s", nombre);
	strcat(nombre, "TU PUEDES!!!");
	return;
}

int sumar(int dato1, int dato2){
	int suma = dato1 + dato2;
	dato1++;
	dato2++;
	printf("\nDentro de la función de los valores son: dato 1 = %d -- dato 2 = %d\n\n", dato1, dato2);
	return suma;
}

void preguntar(char cuestion1[], char cuestion2[]){
	int edad = 0;
	char mensaje[20] = "";
	printf("%s: ", cuestion1);
	scanf("%d", &edad);
	printf("%s: ", cuestion2);
	scanf("%s", mensaje);
}
