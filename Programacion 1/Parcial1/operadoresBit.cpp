#include <stdio.h>
//Operadores a nivel bit

int main(){
	int a=14, b=10;
	int c=a & b;
	int d=a | b;
	int e=a ^ b;
	
	if(c==10) printf("Verdadero\n");
	else printf("Falso\n");
	
	if(d==14) printf("Verdadero\n");
	else printf("Falso\n");
	
	if(e==4) printf("Verdadero\n");
	else printf("Falso\n");
	
	a=a<<1; //desplazamiento hacia la izquierda
	//a=14= 1110
	//a<<1= 11100 = 28
	b>>=3; //desplazamiento hacia la derecha
	//b=10= 1010
	//b>3 = 0001=1
	
	printf("a= %d\n",a);
	printf("b= %d\n",b);
	
	return 0;
}
