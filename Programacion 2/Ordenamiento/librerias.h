#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

#define T 10
int f = 0;
int c = 0;
int tam[T] = {0};

typedef struct{
	int matriculas;
	char carrera[20];
	float calif[3];
	float promedio;
}Dato;

typedef struct{
	Dato dat;
	char nombre[20];
	int edad;
}Datos;

int matricula = 180000;

void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

enum MENU{OPC1 = 1, OPC2, OPC3, OPC4, OPC5, OPC6, OPC7};
int opc = 0, x = 0, y = 0;

#include "validaciones.h"
#include "menu.h"
#include "archivos.h"
#include "ordenSeleccionU.h"
#include "ordenSeleccionB1.h"
#include "ordenSeleccionB2.h"
#include "tareaSeleccion.h"
