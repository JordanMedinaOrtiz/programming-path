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

srand (time(NULL));
while (i<=n) {  
	x=I+rand()%n; 
	printf("x=%i \n",x);
	i++; 
}; 
getch();
return(0);
}