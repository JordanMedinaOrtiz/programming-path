#include <conio.h>
#include <stdio.h>

int i,datos[10]={-3,2,0,1,3,5,7,9,-2,4};
main(){
    printf ("Numero de la lista 1: %d\n", datos[0]);
    printf ("Numero de la lista 9: %d\n", datos[9]);
    printf ("cambia el elemento 4 de la lista: ");
    scanf ("%i",&datos[4]);
    printf ("\n");
    printf ("\nLista de elementos:\n");
    for (i=0;i<=9;i++)
    printf("El elemento %i es: %i\n",i,datos[i]);
    printf ("\nLista horizontal: \n");
    for (i=0;i<=9;i++)
    printf("%i ",datos[i]);
}
