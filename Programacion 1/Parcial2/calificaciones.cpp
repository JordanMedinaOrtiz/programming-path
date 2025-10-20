//Jordan Medina Ortiz - 179913
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	float calf[5][3] = {0};
	float prom[5] = {0};
	float promg[4] = {0};
	float validar = 0, aux = 0;
	char nombres[5][20] = {" "};
	
	for(int i=0; i<5; i++){
		printf("Alumno %d\n", (i+1));
		printf("Nombre: ");
		fgets(nombres[i], 20, stdin);
		fflush(stdin);
		for(int j=0; j<3; j++){
			do{
				printf("Calificacion %d: ",(j+1));
				validar = scanf("%f", &calf[i][j]);
				fflush(stdin);
			}while(validar !=1 || !(calf[i][j] >=0 && calf[i][j] <= 10));
		}
		printf("\n");
	}
	
	for(int i=0; i<5; i++){
		prom[i] = (calf[i][0] + calf[i][1] + calf[i][2]) / 3;
		if(i<3){
			promg[i] = (calf[0][i] + calf[1][i] + calf[2][i] + calf[3][i] + calf[4][i]) / 5;	
		}
		if(i<5){
			promg[3] = (prom[0] + prom[1] + prom[2] + prom[3] + prom[4]) / 5;
		}
	}
	
	printf("\nAlumno\tPar1\tPar2\tPar3\tPromedio\n");
	for(int i=0; i<5; i++){
		printf("%s\t", nombres[i]);
		for(int j=0; j<3; j++){
			printf("%.2f\t", calf[i][j]);
		}
		printf("%.2f\n", prom[i]);
	}
	
	printf("\n\nProm: \t");
	for(int i=0; i<4; i++){
		printf("%.2f\t", promg[i]);
	}
	
	return 0;
}
