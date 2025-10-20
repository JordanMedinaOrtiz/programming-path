#include <stdio.h>
#include <conio.h>
#include <locale.h> 
#include <windows.h> 

int main(){
    SetConsoleCP(1252); //STDIN codificacion de windows 1252
    SetConsoleOutputCP(1252); //STDOUT

    char nombre[20] = " ";
    float promedio = 0;
    float mensualidad = 0;

    printf("Introduce nombre del estudiante: ");
    gets(nombre);
    printf("Introduce el promedio del estudiante: ");
    scanf("%f", &promedio);

    if (promedio>=9 && promedio<=10)
        mensualidad = (8000*.50);
	else {
		if(promedio>=8 && promedio<=9)
			mensualidad = (8000-8000*.30);
		else mensualidad=8000;		
	}	
        
    printf("\nNombre del estudiante: %s\n", nombre);
    printf("Mensualidad a pagar: %.2f", mensualidad);
    
    getch();
    return 0;
}
