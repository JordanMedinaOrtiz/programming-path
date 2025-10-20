#include <stdio.h>
#include <windows.h>

main ()
{
    float primerparcial=0,segundoparcial=0,tercerparcial=0,final=0,calificación=0;
    
    system ("Hostname");
	system ("Whoami");
    
    printf ("Calificación primer parcial:\t");
    scanf ("%f",&primerparcial);
    printf ("Calificación segundo parcial:\t");
    scanf ("%f",&segundoparcial);
    printf ("Calificación tercer parcial:\t");
    scanf ("%f",&tercerparcial);
    printf ("Calificación final:\t");
    scanf ("%f",&final);

    calificación= ((primerparcial*.20)+(segundoparcial*.20)+(tercerparcial*.20)+(final*.40));
    
    printf ("Calificación final: %.2f ",calificación);

    if ( calificación > 7 )
    printf ("Aprobado");
    if ( calificación < 7 )
    printf ("Reprobado");

}
