#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generarHoras(float horas[], int num_Dias){
	for(int i=0; i<num_Dias; i++){
		double aux = (double)rand() / RAND_MAX;
		double min = 1.0;
    	double max = 7.0;
    	int precision = 1;
    	double aux2 = min + aux * (max - min);
		horas[i] = aux2;
		printf("Dia %d: %.1f\n", i+1, horas[i]);
	}
}

float calcularTotalHoras(float horas[], int num_Dias){
	float aux = 0, aux2 = 0;
	for(int i=0; i<num_Dias; i++){
		aux = horas[i];
		aux2 = aux + aux2;
	}
	printf("\n\nTotal de horas durante la semana: %.2f", aux2);
	return aux2;
}

void encontrarMaxMinHoras(float ventas[], int num_Dias, float *maximo, int *diaMaximo, float *minimo, int *diaMinimo){
    *maximo = ventas[0];
    *minimo = ventas[0];
    *diaMaximo = 0;
    *diaMinimo = 0;
    
    
    for (int i = 1; i < num_Dias; i++){
        if (ventas[i] > *maximo){
            *maximo = ventas[i];
            *diaMaximo = i; 
        }
        if (ventas[i] < *minimo){
            *minimo = ventas[i];
            *diaMinimo = i;
        }
    }
    
    printf("\nDía con las horas más altas (DIA %d): %.1f", *diaMaximo + 1, *maximo);
	printf("\nDía con las horas más bajas (DIA %d): %.1f", *diaMinimo + 1, *minimo);
}

float calcularPromedioHoras(float total, int num_Dias){
	float aux = total / 7;
	printf("\nPromedio de horas diarias: %.2f", aux);
}

int main(){
	srand(time(NULL));
	float *arreglo = (float *)malloc(7 * sizeof(float));
	float total = 0;
	float maximo;
	int diaMaximo;
	float minimo;
	int diaMinimo;
	
	printf("Horas diarias durante la semana: \n\n"); 
	
	generarHoras(arreglo, 7);
	total = calcularTotalHoras(arreglo, 7);
	encontrarMaxMinHoras(arreglo, 7, &maximo, &diaMaximo, &minimo, &diaMinimo);
	calcularPromedioHoras(total, 7);
	return 0;
}
