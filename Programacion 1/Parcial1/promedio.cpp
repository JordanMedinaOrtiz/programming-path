#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	float calificacion1=0, calificacion2=0, calificacion3=0, promedio=0;
	
	printf("Calificaci%n 1: ", 162);
	scanf("%f", &calificacion1);
	printf("Calificaci%n 2: ", 162);
	scanf("%f", &calificacion2);
	printf("Calificaci%n 3: ", 162);
	scanf("%f", &calificacion3);
	promedio=(calificacion1 + calificacion2 + calificacion3)/3;
	
	if(promedio>=7 && promedio<8){
		printf("\nPromedio: %.2f Puedes Mejorar!!", promedio);
	}
	if(promedio>=8 && promedio<9){
		printf("\nPromedio: %.2f Muy Bien!!", promedio);
	}
	if(promedio>=9 && promedio<=10){
		printf("\nPromedio: %.2f Excelente!!", promedio);
	}
	if(promedio<=7){
		printf("\nPromedio: %.2f Excelente!!", promedio);
	}
}
