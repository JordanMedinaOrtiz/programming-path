#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <conio.h>

int tam = 3;
//int tamFila = 5;
//int tamColumna = 2;

typedef struct {
	int matricula;
	char nombre[20];
	char carrera[20];
}datos; //variable de la estructura

typedef struct {
	datos dat;
	char materia[20];
	float calif[3];
	int semestre;
}registro;

registro reg[] = {};


typedef struct {
	int matricula;
	int edad;
	int semestre;
}registros;

//registros regBidi[][] = {};

#include "validaciones.h"
#include "estructuras.h"
#include "archivos.h"
#include "apuntadores.h"
#include "arreglos.h"
