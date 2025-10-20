#include <stdio.h>
#include <conio.h>
#include <math.h>
// Ejemplos de algunas funciones matemáticas
// Guillermo García Haro 01/12/2020
int main(void) {
int n=5,m=5,l=0,k=0;
const float pi=3.141592; //constante del valor de pi
k=n++;
printf("%i \n",k) ;
printf("%i \n",n) ;
l=++m;
printf("%i \n",l) ;
printf("%i \n",m) ;
printf("Seno de 45 grados: %0.8f \n",sin(45*(pi/180))); //seno de 45 grados (se calcula en radianes)
printf("Seno inverso de 0.7071068:  %0.2f \n",asin(0.7071068)*(180/pi)); //seno inverso de 0.7071
getch();

return 0;

}
