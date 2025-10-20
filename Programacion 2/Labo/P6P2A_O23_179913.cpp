//Jordan Medina Ortiz 179913 - Practica 6 - Programacion 2 - Grupo A 2:00PM a 4:00PM - Pilas dinámicas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>

//Estructura para representar una página web
struct PaginaWeb{
    char url[100];
};

//Estructura para representar una pila de historial de navegación
struct PilaNavegacion{
    struct PaginaWeb* historial;
    int tope; //Índice del elemento superior en la pila
    int capacidad; //Capacidad actual de la pila
};

void inicializarPila(struct PilaNavegacion* pila){
    pila->capacidad = 3; //Capacidad inicial
    pila->historial = (struct PaginaWeb*)malloc(pila->capacidad * sizeof(struct PaginaWeb));
    pila->tope = -1; //La pila está vacía inicialmente
}

void liberarPila(struct PilaNavegacion* pila){
    free(pila->historial); //Usamos free para eliminar el espacio
}

int noHaySiguiente(struct PilaNavegacion* pila){
    return (pila->tope < pila->capacidad - 1); //Si esta vacia retorna
}

int estaVacia(struct PilaNavegacion* pila){
    return (pila->tope == -1); //Si esta vacia retorna
}

int estaLlena(struct PilaNavegacion* pila){
    return (pila->tope == pila->capacidad - 1); //Si esta llena retorna 
}

void redimensionarPila(struct PilaNavegacion* pila){
    pila->capacidad *= 2; //Duplicar la capacidad
    pila->historial = (struct PaginaWeb*)realloc(pila->historial, pila->capacidad * sizeof(struct PaginaWeb));
}

void agregarPagina(struct PilaNavegacion* pila, const char* url){
    if(estaLlena(pila)){ //Si esta llena y retorna valor 
        redimensionarPila(pila); //Llama a la funcion de redimensionar
    }
    pila->tope++; //Se incrementa el tope
    strcpy(pila->historial[pila->tope].url, url); //Copiamos el valor del hisotorial
    printf("Página agregada: %s\n", url); //Imprime la pagina actual
}

void retrocederPagina(struct PilaNavegacion* pila){
    if(estaVacia(pila)){ //Si esta vacia la pila
        printf("No hay páginas anteriores.\n"); //Imprime que no hay paginas detras
        return; //Retorna (acaba la funcion)
    }
    pila->tope--; //Deincrementa el tope
    printf("Retrocediendo a la página anterior.\n"); //Imprime que se ha retrocede
}

void avanzarPagina(struct PilaNavegacion* pila){
	if(noHaySiguiente(pila)){
    	printf("No hay página siguiente.\n"); //Imprime que no hay paginas detras
        return; //Retorna (acaba la funcion)
	}
    if(pila->tope < pila->capacidad - 1){ //Si tope es menor a capacidad en menos 1
        pila->tope++; //El tope incrementa
        printf("Avanzando a la página siguiente.\n"); //Imprime que ha avanzado de pagina
    }else{
        printf("No hay páginas siguientes.\n"); //Imprime que no hay paginas
    }
}

void mostrarPaginaActual(struct PilaNavegacion* pila){
    if(estaVacia(pila)){ //Si la funcion estaVacia retorna
    	printf("%s\n", pila->historial[0].url);
        //printf("No hay página actual.\n"); //Dice que no hay paginas actuales es decir agregadas
    }else{
        printf("Página actual: %s\n", pila->historial[pila->tope].url); //Imprime la pagina actual
    }
}

int main(){
	setlocale(LC_CTYPE, "spanish");
    struct PilaNavegacion historial;
    inicializarPila(&historial);

    while (1) {
        printf("\nOpciones:\n");
        printf("1. Navegar a una nueva URL\n");
        printf("2. Retroceder a la página anterior\n");
        printf("3. Avanzar a la página siguiente\n");
        printf("4. Mostrar página actual\n");
        printf("5. Salir\n");

        int opc = 0, valida = 0;
        do{
        	printf("Seleccione una opción: ");
        	valida = scanf("%d", &opc);
        	fflush(stdin);
		}while(valida != 1 || opc >= 6);

        switch (opc){
            case 1: {
                char nuevaURL[100];
                printf("Introduzca la URL: ");
                scanf("%s", nuevaURL);
                agregarPagina(&historial, nuevaURL);
                getch();
                system("cls");
                break;
            }
            case 2:
                retrocederPagina(&historial);
                getch();
                system("cls");
                break;
            case 3:
                avanzarPagina(&historial);
                getch();
                system("cls");
                break;
            case 4:
                mostrarPaginaActual(&historial);
                getch();
                system("cls");
                break;
            case 5:
                liberarPila(&historial);
                exit(1);
        }
    }

    return 0;
}
