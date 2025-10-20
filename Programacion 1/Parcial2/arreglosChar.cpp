#include <stdio.h>
#include <conio.h>

int main(){
	//char cadena[6] = "";
	//char cadena[] = "Maria";
	//char cadena[6] = "Maria";
	//char cadena[6] = {'M', 'a', 'r', 'i', 'a','\0'};
	//char cadena[] = {'M', 'a', 'r', 'i', 'a','\0'};
	//char cadena[] = {'M', 'a', 'r', 'i', 'a'};
	
	char cadena[6];
	cadena[0]='M';
	cadena[1]='a';
	cadena[2]='r';
	cadena[3]='i';
	cadena[4]='a';
	
	for(int i=0; i<5; i++){
		printf("\nCaracter en la cadena: %c\t", cadena[i]);
	}
	
	printf("\nCadena %s", cadena);
	
	printf("\nEscribe la palabra Lucia, letra por letra :(");
	
	for(int i=0; i<5; i++){
		printf("\nEscribe la letra ");
		scanf("%c", &cadena[i]);
		fflush(stdin);
	}
	
	printf("\nImprimiendo la palabra Lucia, letra por letrra  :(\n");
	for(int i=0; i<5; i++){
		printf("%c", cadena[i]);
	}
	
	printf("\nImprimiendo la palabra Lucia, sin usar for:(\n");
	printf("%c", cadena[0]);
	printf("%c", cadena[1]);
	printf("%c", cadena[2]);
	printf("%c", cadena[3]);
	printf("%c", cadena[4]);
	
	printf("\nEscribiendo la palabrra Lucia como cadena");
	printf("\n%s", cadena);
	
	getch();
}
