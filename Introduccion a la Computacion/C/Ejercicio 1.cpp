//Esto es una linea de comentario//
/* Esto es un bloque de comentario*/
#include <stdio.h> //Funciones de entrada y salida de datos//
#include <conio.h> //Funciones para pausa (getch)//
#include <windows.h> //Funciones de la consola (MS-MOS)//

main()
{
	int a=10,b=15; //Se declara variable entera
	float c=6.75,d=0; //Se declara variable float (real)
	system ("Color 0A"); //Cambia el color de fondo y fuente de la consola
	system ("Mode con lines=25 cols=80"); //Establecer ta�ano de consola
	system ("Hostname"); //Nombre del equipo
	system ("Whoami"); //Nombre del usuario
	printf ("Este es un mensaje\n"); //Usar \n para salto de linea//
	printf ("Este es otro mensaje\t"); //Usar \t tabulador//
	printf ("Valor de a= %i \t valor de b= %i\n",a,b); //%i significa variable entera
	printf ("Valor de c= %f ",c); //%f significa variable real (decimales)
	printf ("Valor de c= %.2f ",c); //%.2f significa los números decimales
	printf ("Ingresa el valor de d: "); 
	scanf ("%f" ,&d); //Ingresar un valor
	printf ("\n el valor de d es %.2f",d); 
	getch(); //Pausa hasta dar enter
}
