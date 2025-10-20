#include <conio.h>
#include <stdio.h> //funcion rand() y srand()
#include <stdlib.h>
#include <time.h> //funcion time

int main()
{
int i=1,x=0,n=0,s,I;

system ("Hostname");
system ("Whoami");
printf ("Cuantos números aleatorios deseas: ");
scanf ("%d" ,&n);
printf ("Limite inferior: ");
scanf ("%d" ,&I);
printf ("Limite superior: ");
scanf ("%d" ,&s);

srand (time(NULL)); //cambia semilla de números aleatorios en base al tiempo del equipo
do{  //se despliegan 10 números aleatorios
	x=I+rand()%n; //aleatorios entre 10 y 19
	printf("x=%i \n",x);
	i++; //equivale a i+i (incremento)
}while (i<=n); //numero de veces
getch();
return(0);
}