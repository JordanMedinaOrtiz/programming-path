#include <stdio.h>
#include <locale.h>
#include <string.h>

int operacion(int, int);
int datos(int);


int main(){
	int a = 10;
	int b = 20;	
	int d = 0;
	int e = 0;
	
	printf("La suma de %d y %d es: %d", a, b, operacion(a, b));
	//datos("El valor de D es: %d", datos(d));
	return 0;
}

int operacion(int dato1, int dato2){
	int operacion = dato1 + dato2;
	dato2 = 70;
	printf("a = %d b = %d\n", dato1, dato2);
	return operacion;
}

int datos(int dato3){
	//datos
}
