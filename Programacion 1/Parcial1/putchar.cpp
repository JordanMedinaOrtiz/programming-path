#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	char c = ' ';
	int i=0;
	bool bandera = true;
	
	printf("Jordan Medina Ortiz-179913 T07C\n");
	
	while(bandera){
		c = getchar();
		putchar(c);
		i++;
		if(i == 5) bandera = false;
	}
	
	printf("\n\nConclusiones: getchar guarda los caracteres en la memoria y correra y con putchar imprimira la primera memoria, es decir el primer caracter y asi sucesivamente hasta que bandera sea falso y sera falso cuando llegue a la memoria 5");
	return 0;
}
