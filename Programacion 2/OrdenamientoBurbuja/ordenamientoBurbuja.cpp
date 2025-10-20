#include <stdio.h>

int main(){
    int t = 10, aux = 0;
    int arreglo[] = {23, 67, 89, 12, 6, 34, 9, 31, 2, 0};
    
    for(int i=0; i<t; i++){
    	printf("Ingresa dato en [%d]: ", i);
    	scanf("%d", &arreglo[i]);
    	fflush(stdin);
	}

    for(int i=0; i<t; i++){
        printf("%d\t", arreglo[i]);
    }

	printf("\n\n");

    for(int i=0; i<t; i++){
        for(int j=0; j<t-i; j++){
            if(arreglo[j] > arreglo[j+1]){
                aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
            printf("%d\t", arreglo[j]);
        }
        printf("\n");
    }
    
    printf("\n\n");
    for (int i = 0; i < t; i++) {
        printf("%d\t", arreglo[i]);
    }

    return 0;
}
