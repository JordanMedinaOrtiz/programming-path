//Estructura de opción multiple
#include <stdio.h>
#include <windows.h>
#include <locale.h>

main ()
{
        system ("Hostname");
        system ("Whoami");
        setlocale (LC_ALL, "Spanish");

        int opción;

        printf ("Ingresa una opción:\n");
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
        default:printf ("Seleccionaste otra opción\n");
                printf ("Lineas de otra opción\n");   
                break;             
        }
}
