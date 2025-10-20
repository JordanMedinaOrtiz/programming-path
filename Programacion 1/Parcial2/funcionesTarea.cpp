//Jordan Medina Ortiz - 179913
#include <stdio.h>
#include <locale.h>

int operacion(int, int);
int datos(int);

int main(){
	setlocale(LC_CTYPE,"spanish");
	int a = 10;
	int b = 20;
	int c = operacion(a,b);
	int d = datos(c);
	
	printf("Jordan Medina Ortíz - 179913\n");
	printf("%d\n", d);
	d = operacion(a,70);
	printf("%d\n", d);
	c = datos(100);
	printf("%d -- %d -- %d -- %d", a, b, c, d);
	
	return 0;
}

int operacion(int dato1, int dato2){
	int operaciones = dato1 + dato2;
	return operaciones;
}

int datos(int dato3){
	int datos = dato3;
	return datos;
}
