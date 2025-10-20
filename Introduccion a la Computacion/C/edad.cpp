#include <stdio.h>
#include <locale.h>
#include <windows.h>

main()
{
	system ("Hostname");
	system ("Whoami");
	
	setlocale (LC_ALL, "Spanish");
	int edad=0;
	printf ("Introduce tu edad: ");
	scanf ("%i", &edad);
	if ( edad >= 18 )
	{
		printf ("\nEres mayor de edad");
	}
	else
	{
		printf ("Eres menor de edad");
	}
}
