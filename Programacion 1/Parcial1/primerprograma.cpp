#include <stdio.h> //printf, scanf
#include <conio.h> //getch
#include <locale.h> //SetLocale
#include <windows.h> //SetConsole

//Lenguaje C, paradigma estructurado
int main(){
    //SetLocale(LC_CTYPE, "Spanish");
    SetConsoleCP(1252); //STDIN codificación de windows 1252
    SetConsoleOutputCP(1252); //STDOUT

    int matricula = 0;
    char nombre[20] = " ";
    char apellidos[30] = " ";
    int edad = 0;
    char carrera[20] = " ";
    char inicial = ' ';

    printf("\n-------Bienvenid@ a Programación Estructurada-------\n");
    printf("\n---------------------Lenguaje C---------------------\n\n");
    printf("\n---------------Direcciones de Memoria---------------\n\n");

    printf("Ubicación matrícula: %d\n", &matricula);
    printf("Ubicación nombre: %d\n", &nombre);
    printf("Ubicación apellidos: %d\n", &apellidos);
    printf("Ubicación edad: %d\n", &edad);
    printf("Ubicación carrera: %d\n", &carrera);
    printf("Ubicación inicial: %d\n", &inicial);

    //sizeof devuelve el nÃºmero de bytes que se utiliza para almacenar el valor

    printf ("Tamaño matricula: %d\n", sizeof(matricula));
    //printf("Tamaño matricula: %d\n", sizeof(int));
    printf ("Tamaño nombre: %d\n", sizeof(nombre));
    printf ("Tamaño apellidos: %d\n", sizeof(apellidos));
    printf ("Tamaño edad: %d\n", sizeof(edad));
    printf ("Tamaño carrera: %d\n", sizeof(carrera));
    printf ("Tamaño inicial: %d\n", sizeof(inicial));

    printf("\n--------------Valores en las variables--------------\n\n");
    printf("Escribe tu matricula: ");
    scanf("%d", &matricula);
    printf("Escribe tu nombre: ");
    scanf("%s", nombre);
    fflush(stdin);
    printf("Escribe tus apellidos: ");
    gets(apellidos);
    printf("Escribe tu edad: ");
    scanf("%d", &edad);
    printf("Escribe tu carrera: ");
    scanf("%s", carrera);
    fflush(stdin);
    printf("Escribe tu inicial: ");
    scanf("%c", &inicial);

    printf("\n---------------------------------------------------\n\n");
    printf("Matrícula: %d\n", matricula);
    printf("Nombre: %s\n", nombre);
    printf("Apellidos: %s\n", apellidos);
    printf("Edad: %d\n", edad);
    printf("Carrera %s\n", carrera);
    printf("Inicial: %c\n", inicial);

    getch();
    return 0;
}
