//Estructura de opción multiple
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#include <math.h>

main ()
{

    int opción;
    float area,base,altura,B,b,H,radio,pi=3.1416;
    do{
        system ("cls");
        system ("Hostname");
		system ("Whoami");

        printf ("Que area deseas calcular:\n");
        printf ("1.- Area de un triangulo:\n");
        printf ("2.- Area de un trapecio:\n");
        printf ("3.- Area de un circulo:\n");
        printf ("0-Salir:\n");
        scanf ("%i",&opción);
        printf ("\n");
    
        switch (opción)
        {
            case 1: printf ("Seleccionaste calcular el area del triangulo\n");
                printf ("Introduce el valor de la base \n");
                scanf ("%f" ,&base);
                printf ("Introduce el valor de la altura \n");
                scanf ("%f" ,&altura);
                area= ((base*altura)/2);
                printf ("El area del triangulo es: %.2f\n",area);
                break;

            case 2: area=0;
                    printf ("Seleccionaste calcular el area del trapecio\n");
                    printf ("Introduce el valor de la base mayor \n");
                    scanf ("%f" ,&B);
                    printf ("Introduce el valor de la base menor \n");
                    scanf ("%f" ,&b);
                    printf ("Introduce el valor de la altura \n");
                    scanf ("%f" ,&H);
                    area= (((B+b)*H)/2);
                    printf ("El area del trapecio es: %.2f\n",area);
                break;

            case 3: area=0;
                    printf ("Seleccionaste calcular el area del circulo\n");
                    printf ("\nArea del circulo \n");
                    printf ("Introduce el valor del radio \n");
                    scanf ("%f" ,&radio);
                    area= (pi*pow(radio,2));
                    printf ("El area del circulo es: %.2f",area);
                break;

            case 0: printf ("Seleccionaste la opción salir\n");
                printf ("Adios\n");
                break;

            default:printf ("Selecciona una opción valida\n");
                break;        
        }

		printf ("\nPresiona cualquier otra tecla para volver al menu\n");
		getch();
		
	}while (opción!=0);
}
