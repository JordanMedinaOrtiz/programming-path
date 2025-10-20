//Jordan Medina Ortiz 179913 Programacion 2 2:00pm - 4:00 pm Grupo A

//Definimos librerias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Definimos arreglo bidimensional
char arreglo[4][4];

void llenarArreglo(char arreglo[4][4]){
	char c;
	
	for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            do{
                c = 'A' + rand() % 26; //le damos a c un valor aleatorio de la A a la Z
                for(int k=0; k<i; k++){ //le decimos que llegue hasta el valor de la i actual
                    for(int l=0; l<4; l++){ //recorremos todas las columnas
                        if(arreglo[k][l] == c){ //si es igual el arreglo en k y l a c
                            c = 0; //le damos a c un valor de 0 para que repita el ciclo
                            break;
                        }
                    }
                }
                for(int l=0; l<j; l++){ //le decimos que recorra hasta la columna actual
                    if(arreglo[i][l] == c){ //si el arreglo en i y l es igual a c
                        c = 0; //le damos a c un valor de 0 para que repita el ciclo
                        break;
                    }
                }
            }while(c == 0); //hasta que c sea 0
            arreglo[i][j] = c; //le damos al arreglo en [i] [j] el valor de c
        }
    }

}

void imprimirArreglo(char arreglo[4][4]){
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("%c\t", arreglo[i][j]); //imprimimos el arreglo en i y j
		}
		printf("\n"); //damos un salto de linea para formar el cuadro
	}
}

void imprimirArreglo2(char arreglo[4][4]){
	printf("\n\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if((i == 0 && j == 3) || (i == 1 && j == 2) || (i == 2 && j == 1) || (i == 3 && j == 0) || (i == 0 && j == 0) || (i == 1 && j == 1) || (i == 2 && j == 2) || (i == 3 && j == 3)){
				printf("%c\t", arreglo[i][j]); //imprime el valor amacenado en I y J
			}else printf("\t"); //damos solamente un tabulador
		}
		printf("\n"); //damos un salto de linea
	}
	
	
}

int main(){
	srand(time(NULL)); //agregamos semilla
	
	llenarArreglo(arreglo); //llamamos a las funciones
	imprimirArreglo(arreglo);
	imprimirArreglo2(arreglo);
	
	return 0;
}
