#include <stdio.h>
#include <stdlib.h>

int main(){
	int suma=0, valor=0;
	
	//etiqueta: //Colocarla aqui NUNCA terminaria el programa
	
	printf("Suma %d \n", suma);
	
	for(int i=0; i<10; i++){
		printf("Dame el valor a sumar: ");
		scanf("%d", &valor);
		suma += valor;
		//suma = suma + valor
		if(suma>500)
		goto etiqueta; //setencia de salto NO recomendada
	}
	etiqueta:
	printf("Suma &d \n", suma);
	
	system("pause");
	return 0;
}
