#include <stdio.h>

int main() {
	char nombre[20];
	float sueldo=0, sueldofinal=0;
	
	printf("Introduce el dombre del empleado: ");
	gets(nombre);
	//scanf("%s", nombre);
	printf("\n Introduce el sueldo del empleado: ");
	scanf("%f", &sueldo );
	
	if(sueldo<1000)
		sueldofinal = sueldo*1.15;
	else {
		if(sueldo>=1000 && sueldo<=1500)
			sueldofinal = sueldo*1.10;
		else sueldofinal = sueldo*1.05;
	}
	
	printf("Nombre del empleado: %s \n", nombre);
	printf("El sueldo es %.2f \n", sueldo);
	printf("El sueldo final es %.2f \n", sueldofinal);
	return 0;
}
