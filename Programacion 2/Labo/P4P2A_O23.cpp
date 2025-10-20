//Jordan Medina Ortiz 179913 - Practica 4 - Programacion 2 - Grupo A 2:00PM a 4:00PM - Arreglo unidimensional dinámico
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void generarVentas(int ventas[], int numDias){
	for(int i=0; i<numDias; i++){
		ventas[i] = 100 + rand() % 1000; //le damos a aux un numero random;
		printf("Dia %d: $%d\n", i+1, ventas[i]); //imprimos los dias y su valor random
	}
}

int calcularTotalVentas(int ventas[], int numDias){
	int aux = 0, aux2 = 0; //declaramos aux
	for(int i=0; i<numDias; i++){
		aux = ventas[i]; //le damos a aux el valor de ventas en i
		aux2 = aux + aux2; //para luego pasarle el valor del 2do auxilar la suma del primer aux + el valor que tiene guardado el 2do auxiliar
	}
	printf("\n\nTotal de ventas durante la semana: $%d", aux2); //imprimimos el valor del auxiliar 2 ya que tiene la suma de todos los valores
	return aux2; //returneamos la suma
}

void encontrarMaxMinVentas(int ventas[], int numDias, int *maximo, int *diaMaximo, int *minimo, int *diaMinimo){
    *maximo = ventas[0]; //le damos el valor de ventas en 0 al valor de maximo
    *minimo = ventas[0]; //le damos el valor de ventas en 0 al valor de minimo
    *diaMaximo = 0; //le damos un valor de 0 al diaMaximo
    *diaMinimo = 0; //le damos un valor de 0 al diaMinimo
    
    
    for (int i = 1; i < numDias; i++){ //un for que inicie en 1 y acabe en el numero de dias y se vaya incrementando 
        if (ventas[i] > *maximo){ //si ventas en i es mayor al valor dado anteriormente en maximo
            *maximo = ventas[i]; //le pasamos el valor que tiene ventas en i al maximo
            *diaMaximo = i; // y al valor de dia maximo le damos i
        }
        if (ventas[i] < *minimo){ //si ventas en i es mayor al valor dado anteriormente en minimo
            *minimo = ventas[i]; //le pasamos el valor que tiene ventas en i al minimo
            *diaMinimo = i; // y al valor de dia minimo le damos i
        }
    }
    
    printf("\nDía con las ventas más altas (DIA %d): $%d", *diaMaximo + 1, *maximo); //imprimimos el dia en el que salio mas alto y lo que gano
	printf("\nDía con las ventas más bajas (DIA %d): $%d", *diaMinimo + 1, *minimo); //imprimimos el dia en el que salio mas bajo y lo que gano
}

float calcularPromedioVentas(int total, int numDias){
	float total2 = total;
	float aux = 0; //declaramos un aux 
	aux = total2 / 7; //aux es el total ya pasado en la funcion y se divide entre 7
	printf("\nPromedio de ventas diarias: $%.2f", aux); //imprime el promedio 
}

int main(){
	setlocale(LC_CTYPE, "spanish");
	srand(time(NULL)); //declaramos semilla de tiempo
	int *arreglo = (int *)malloc(7 * sizeof(int)); //declaramos el arreglo 
	int total = 0; //declaramos una variable total la cual servira para calcular el promedio
	int maximo; //declaramos variables
	int diaMaximo;
	int minimo;
	int diaMinimo;
	
	printf("Ventas diarias durante la semana: \n\n"); //imprimimos texto
	
	generarVentas(arreglo, 7); //pasamos el arreglo y el numero de dias
	total = calcularTotalVentas(arreglo, 7); //le damos el valor de total es igual al total de ventas
	encontrarMaxMinVentas(arreglo, 7, &maximo, &diaMaximo, &minimo, &diaMinimo); //pasamos el arreglo, el numero de dias y las variables en forma de puntero
	calcularPromedioVentas(total, 7); //pasamos el arreglo y el numero de dias 
	return 0; //se acaba el programa
}
