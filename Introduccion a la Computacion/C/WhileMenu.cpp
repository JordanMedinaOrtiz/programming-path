//Estructura de opción multiple
#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <conio.h>
#include <wchar.h>

main ()
{

    int opción;
    do{
        system ("cls");
        system ("Hostname");
		system ("Whoami");
        setlocale (LC_ALL, "Spanish");
        setlocale(LC_ALL, "");
        setlocale (LC_CTYPE, "Spanish");

        printf ("MENU:\n");
        printf ("1.- Opción 1:\n");
        printf ("2.- Opción 2:\n");
        printf ("3.- Opción 3:\n");
        printf ("0-Salir:\n");
        scanf ("%i",&opción);
        printf ("\n");
    
        switch (opción)
        {
            case 1: printf ("Seleccionaste la opción 1\n");
                printf ("Lineas de opción 1\n");
                break;
            case 2: printf ("Seleccionaste la opción 2\n");
                printf ("Lineas de opción 2\n");
                break;
            case 3: printf ("Seleccionaste la opción 3\n");
                printf ("Lineas de opción 3\n");
                break;
            case 0: printf ("Seleccionaste la opción salir\n");
                printf ("Adios\n");
                break;
            default:printf ("Seleccionaste otra opción\n");
                printf ("Lineas de otra opción\n");   
                break;        
        }

		printf ("\nPresiona cualquier tecla para continuar\n");
		getch();
		
	}while (opción!=0)
}
