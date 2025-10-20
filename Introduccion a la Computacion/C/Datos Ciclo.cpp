#include <conio.h>
#include <stdio.h>

int i,datos[10]={-3,2,0,1,3,5,7,9,-2,4};

main (){
    for (i=0;i<=9;i++)
    printf ("El elemento %i es: %i\n",i,datos[i]);

    printf ("\n Lista horizontal: \n");

    for (i=0;i<=9;i++)
    printf ("%i ", datos[i]);
}
