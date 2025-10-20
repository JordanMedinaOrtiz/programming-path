#include <conio.h> //getch();
#include <iostream> //cout, cin, endl, fixed
#include <iomanip> //setw, setprecision
#include <stdlib.h>
#include <locale.h>
#include <string.h>
using namespace std; //Sin esta linea no se podra usar C++

#define T 10
int vec[T] = {0};
int tope = 0;

typedef struct {
	int matricula;
	char nombre[20];
	char carrera[5];
}datos; //variable de la estructura

typedef struct {
	datos dat;
	char materia[20];
	float calif[3];
	int semestre;
}registro;

registro reg[] = {0};

#include "validaciones.h";
#include "pilaPseudocodigo.h";
#include "colaPseudocodigo.h";
#include "pila_cola_estructura.h"
#include "archivo.h"
