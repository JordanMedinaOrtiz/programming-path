//Jordan Medina Ortiz 179913 - Practica 3 - Programacion 2 - Grupo A 2:00PM a 4:00PM - Ejercicios de Lógica con arreglos
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arreglo[5][5] = {0};

void llenarArreglo(int arreglo[5][5]){
	int aux = 0; //inicializamos un aux
	
	for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            do{ //mientras el aux sea 0 se ejecutara
                aux = 10 + rand() % 90; //le damos a aux un numero random
                for(int k=0; k<i; k++){ //hasta que sea menor a i
                    for(int l=0; l<5; l++){ //hasta que sea menos a 5
                        if(arreglo[k][l] == aux){ //si es el aux es igual al arreglo en k y l
                            aux = 0; //le damos a aux el valor de 0
                            break;
                        }
                    }
                }
                for(int l=0; l<j; l++){ //hasta que l sea menor a j
                    if(arreglo[i][l] == aux){ //si es el aux es igual al arreglo en k y l
                        aux = 0; //le damos a aux el valor de 0
                        break;
                    }
                }
            }while(aux == 0);
            arreglo[i][j] = aux; //le damos al arreglo en i y j el valor de aux
        }
    }
	
}

void imprimirArreglo(int arreglo[5][5]){
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			printf("%d\t", arreglo[i][j]); //imprimir el arreglo en i y j
		}
		printf("\n"); //salto de linea
	}
}

void buscarArreglo(int arreglo[5][5]){
	int aux = 0; //declaramos aux
	
	printf("\n\nBusca el numero: "); //imprimimos texto
	scanf("%d", &aux); //capturamos el numero a buscar
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(aux == arreglo[i][j]){ //si el aux es igual al arreglo en i y j
				printf("Se encuentra en la posicion: [%d][%d]", i, j); //imprime la posicon en la que se encuentra
				printf("\nVecinos inmediatos: "); //imprime los vecinos inmediatos
				if(arreglo[i-1][j+1] == NULL){ // si el arreglo en i-1 y j-1 es nulo 
					printf("\n-Abajo: %d", arreglo[i+1][j]); //se le da i+1 para abajo
					printf("\n-Derecha: %d", arreglo[i][j+1]); //se le da j+1 para la derecha
					if(!(arreglo[i+1][j] == NULL)) printf("\n-Izquierda: %d", arreglo[i][j-1]); //se le da j-1 para la izquierda
					continue;
				}else{ //si no
					if(arreglo[i-1][j-1] == NULL){ //si el arreglo en i-1 y j-1 es null (para la esquina superior derecha)
					printf("\n-Izquierda: %d", arreglo[i][j-1]); //se le da j-1 para la izquierda
					printf("\n-Abajo: %d", arreglo[i][j+1]); //se le da j+1 para la derecha	
					if(!(arreglo[i+1][j] == NULL)) printf("\n-Arriba: %d", arreglo[i-1][j]); //se le da i+1 para arriba
					continue;
					}else{ //si no
						if(arreglo[i+1][j+1] == NULL){ //si i+i y j+i es nulo (para la esquina inferior derecha
							printf("\n-Arriba: %d", arreglo[i-1][j]); //se le da i-1 para arriba
							printf("\n-Izquierda: %d", arreglo[i][j-1]); //se le da i+1 para abajo
							if(!(arreglo[i][j+1] == NULL)) printf("\n-Derecha: %d", arreglo[i][j+1]); //se le da j+1 para derecha
							continue;
						}else{ //si no imprime todas las posiciones
							printf("\n-Arriba: %d", arreglo[i-1][j]); //se le da i-1 para arriba
							printf("\n-Abajo: %d", arreglo[i+1][j]); //se le da i+1 para abajo
							printf("\n-Izquierda: %d", arreglo[i][j-1]); //se le da j-1 para la izquierda
							printf("\n-Derecha: %d", arreglo[i][j+1]); //se le da j+1 para la derecha
						}	
					}
				}	
			}
		}
	}
}

int main(){
	srand(time(NULL)); //declaramos semilla de tiempo
	
	llenarArreglo(arreglo); //llamamos a la funciones
	imprimirArreglo(arreglo);
	buscarArreglo(arreglo);
	
}
