#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <locale.h>
#include <windows.h>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>

using namespace std;

struct Empleado{
	int idEmpleado;
	string nombre;
	string puesto;
	float salario;
	struct Empleado *sig; //siguiente
	struct Empleado *ant; //anterior
} *primero, *ultimo;

void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

struct Listas{
	Empleado *primero;
	Empleado *ultimo;
	Listas *sig;
}*primeraLista, *ultimaLista;

enum MENU{OPC1 = 1, OPC2, OPC3, OPC4, OPC5, OPC6, OPC7, OPC8, OPC9, OPC10, OPC11, OPC12, OPC13, OPC14};
int opc = 0, x = 0, y = 0;

#include "validaciones.h"
#include "funciones.h"
#include "menu.h"
