#include <stdio.h>
#include <stdlib.h> //rand() srand(semilla)
#include <time.h> //srand (time(NULL));
#include <conio.h> //getch
//OPERADOR CONDICIONAL
int main(){
	int semilla=0;
	int valor=0;
	
	srand(time(NULL)); //para generar una semilla diferente para cada ejecución
	int num= rand()%11+20; //rand()%(INTERVALO+1)+MINIMO //mínimo 20 - máximo 30
	
	//Operador Condicionl
	(num>25)? printf("\tSI %d", num) : printf("\ntNO %d",num);
	
	(num>25)? valor=num : valor=0;
	printf("\n\nValor= %i", valor);
	
	printf("\n\nIngresa la semilla: ");
	scanf("%d", &semilla);
	
	srand(semilla);
	printf("\n\tN%cmero rand %d", 163, rand()%11+20); //minimo  10 - maximo 30
	
	getch();
	return 0;
}
