#include <stdio.h>

#define MAX_FILAS 10  // Define un valor máximo para las filas
#define MAX_COLUMNAS 10  // Define un valor máximo para las columnas

void llenarCaracol(char matriz[][MAX_COLUMNAS], int filas, int columnas) {
    char letra = 'A';

    int inicioFila = 0, inicioColumna = 0;
    int finFila = filas - 1, finColumna = columnas - 1;

    while (letra <= 'Z') {
        for (int i = inicioColumna; i <= finColumna; i++) {
            matriz[inicioFila][i] = letra++;
        }

        for (int i = inicioFila + 1; i <= finFila; i++) {
            matriz[i][finColumna] = letra++;
        }

        for (int i = finColumna - 1; i >= inicioColumna; i--) {
            matriz[finFila][i] = letra++;
        }

        for (int i = finFila - 1; i > inicioFila; i--) {
            matriz[i][inicioColumna] = letra++;
        }

        inicioFila++;
        inicioColumna++;
        finFila--;
        finColumna--;
    }
}

void imprimirMatriz(char matriz[][MAX_COLUMNAS], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int filas, columnas;

    printf("Introduce cuantas filas: ");
    scanf("%d", &filas);

    if (filas > MAX_FILAS) {
        printf("El número de filas excede el máximo permitido.\n");
        return 1;
    }

    printf("Introduce cuantas columnas: ");
    scanf("%d", &columnas);

    if (columnas > MAX_COLUMNAS) {
        printf("El número de columnas excede el máximo permitido.\n");
        return 1;
    }

    char matriz[MAX_FILAS][MAX_COLUMNAS];
    llenarCaracol(matriz, filas, columnas);
    imprimirMatriz(matriz, filas, columnas);

    return 0;
}

