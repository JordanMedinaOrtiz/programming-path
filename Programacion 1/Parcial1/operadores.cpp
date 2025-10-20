//Operadores monarios (incremento ++ y decremento --)
//Operadores de asignación (=, *=, /=, %=, +=, -=)
//Operadores aritmeticos (*, /, +, -) 
//Operadores relacionales de comparación (==, !=, >=, <=, <, >)
//Operadores lógicos (&&, ||, !)

#include <stdio.h>
int main(){
	int a=8;
	int b=31;
	int c=3;
	int d=77;
	
	d = a-- +  --b /c * 2;
	d = b % c++;
	c += b + 10 / 2+ ++a;
	
	if(b%--c ==10 || a-- + --b <19 || --d / c++ <10 && b*c >30){
		printf("True\n");
	}else{
		printf("False\n");
	}
	printf("Los valores finales son:\n a=%d \n b=%d \n c=%d \n d=%d", a);
}
