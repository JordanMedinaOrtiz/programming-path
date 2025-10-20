#include <stdio.h> //printf, scanf
#include <conio.h> //getch
#include <locale.h> //SetLocale
#include <windows.h> //SetConsole

//Lenguaje C, paradigma estructurado
int main(){
    //SetLocale(LC_CTYPE, "Spanish");
    SetConsoleCP(1252); //STDIN codificaci�n de windows 1252
    SetConsoleOutputCP(1252); //STDOUT

    int matricula = 0;
    char nombre[20] = " ";
    char apellidos[30] = " ";
    int edad = 0;
    char carrera[20] = " ";
    char inicial = ' ';

    printf("\n-------Bienvenid@ a Programaci�n Estructurada-------\n");
    printf("\n---------------------Lenguaje C---------------------\n\n");
    printf("\n---------------Direcciones de Memoria---------------\n\n");

    printf("Ubicaci�n matr�cula: %d\n", &matricula);
    printf("Ubicaci�n nombre: %d\n", &nombre);
    printf("Ubicaci�n apellidos: %d\n", &apellidos);
    printf("Ubicaci�n edad: %d\n", &edad);
    printf("Ubicaci�n carrera: %d\n", &carrera);
    printf("Ubicaci�n inicial: %d\n", &inicial);

    //sizeof devuelve el número de bytes que se utiliza para almacenar el valor

    printf ("Tama�o matricula: %d\n", sizeof(matricula));
    //printf("Tama�o matricula: %d\n", sizeof(int));
    printf ("Tama�o nombre: %d\n", sizeof(nombre));
    printf ("Tama�o apellidos: %d\n", sizeof(apellidos));
    printf ("Tama�o edad: %d\n", sizeof(edad));
    printf ("Tama�o carrera: %d\n", sizeof(carrera));
    printf ("Tama�o inicial: %d\n", sizeof(inicial));

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
    printf("Matr�cula: %d\n", matricula);
    printf("Nombre: %s\n", nombre);
    printf("Apellidos: %s\n", apellidos);
    printf("Edad: %d\n", edad);
    printf("Carrera %s\n", carrera);
    printf("Inicial: %c\n", inicial);

    getch();
    return 0;
}
