#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{
	int idNodo;
	//Aqui las variables que guardan
	//La informaci�n del nodo
	struct Nodo *izq, *der;
};

typedef struct Nodo *ABB, *pNodo;

#include "funciones.h"
