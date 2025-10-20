#include <conio.h> //getch();
#include <iostream> //cout, cin, endl, fixed
#include <iomanip> //setw, setprecision
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
using namespace std; //Sin esta linea no se podra usar C++

//La función malloc() reserva memoria y retorna su dirección, a retornar NULL en caso de no haber conseguido suficiente memoria. 
//La funcion free() permite liberar la memorai reservada a través de un apuntador

int row = 0;
int column = 0;
int tam[5];
struct Ejemplo{
	int entero;
	float flotante;
};

struct Docente{
	int noEmpleado;
	char nombre[20];
	char apellidos [20];
	char fechaIngreso[20];
};

struct Clase{
	int noClase;
	char salon[3];
	char horario[20];
};

struct Registro{
	Docente docente;
	Clase clase;
	int asistencias;
};

#include "validaciones.h"
#include "arreglos.h"
#include "estructuraDinamica.h"
