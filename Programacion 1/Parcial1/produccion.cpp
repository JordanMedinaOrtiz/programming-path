#include <windows.h>
#include <stdio.h>

int main(){
    SetConsoleCP(1252); //STDIN codificación de windows 1252
    SetConsoleOutputCP(1252); //STDOUT

    int cantPares=0;
    char modelo[20]= " ";
    char mensaje[30]= " ";

	printf("\nModelo: ");
    //gets(modelo);
    scanf("%s", modelo);
    printf("Cantidad de pares producidos: ");
    scanf("%i", &cantPares);

    if(cantPares<1000)
        strcpy(mensaje, "Mucho tiempo muerto :(");
    if(cantPares>=1000 && cantPares<=1500)
        strcpy(mensaje, "¿Porqué tan poquitas?");
    if(cantPares>1500)
        strcpy(mensaje, "Ahora si trabajaste :)");

    printf("\nModelo: %s\n", modelo);
    printf("Cantidad de pares producidos: %i\n", cantPares);
    printf("Mensaje: %s\n", mensaje);

}
