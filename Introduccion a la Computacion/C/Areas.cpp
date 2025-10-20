#include <stdio.h> 
#include <conio.h> 
#include <windows.h>
#include <math.h>

main()
{
	float area=0,base=0,altura=0,B=0,b=0,H=0,radio=0,pi=3.1416;
	system ("Hostname");
	system ("Whoami");
	
	printf ("\nArea del triangulo \n");
	printf ("Introduce el valor de la base \n");
	scanf ("%f" ,&base);
	printf ("Introduce el valor de la altura \n");
	scanf ("%f" ,&altura);
	area= ((base*altura)/2);
	printf ("El area del triangulo es: %.2f\n",area);
	
	area=0;
	printf ("\nArea del trapecio \n");
	printf ("Introduce el valor de la base mayor \n");
	scanf ("%f" ,&B);
	printf ("Introduce el valor de la base menor \n");
	scanf ("%f" ,&b);
	printf ("Introduce el valor de la altura \n");
	scanf ("%f" ,&H);
	area= (((B+b)*H)/2);
	printf ("El area del trapecio es: %.2f\n",area);
	
	area=0;
	printf ("\nArea del circulo \n");
	printf ("Introduce el valor del radio \n");
	scanf ("%f" ,&radio);
	area= (pi*pow(radio,2));
	printf ("El area del circulo es: %.2f",area);
	
	getch();
}
