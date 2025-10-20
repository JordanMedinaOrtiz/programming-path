#include <windows.h>
#include <math.h>
#include <stdio.h>

main ()
{
    float IMC,peso,estatura;
    
    system ("Hostname");
	system ("Whoami");

    printf ("Introduce tu peso: ");
    scanf ("%f", &peso);
    printf ("Introduce tu estatura: ");
    scanf ("%f", &estatura);
    IMC= peso/pow(estatura,2);
    printf ("IMC: %.2f\n",IMC);
    
    if (IMC < 18.5)
        printf ("Bajo Peso");
    if (IMC >18.5 && IMC <25)
        printf ("Normal");
    if (IMC >25 && IMC <30) 
        printf ("Sobre peso");  
    if (IMC >30)
        printf ("Obesidad");
        
}
