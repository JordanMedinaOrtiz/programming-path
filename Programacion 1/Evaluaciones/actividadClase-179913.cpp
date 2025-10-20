#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <ctype.h>

typedef struct{
	int idDocente;
	char nomCompleto[20];
	char correo[20];
	char NSS[20];
	char fechadeIngreso[20];
}Docente;

typedef struct{
	int idAlumno;
	char direccion[20];
	char tel[20];
	char correo[20];
}Alumno;

typedef struct{
	int idGrupo;
	char semestre[10];
	Docente docente;
	Alumno alumno;
}Grupo;
 

Grupo grupo[10] = {};
int g=0;

int validaEntero(const char);
char validaCadena(const char, char[]);
void inicializarArreglo();
void imprimirArreglo();

int main(){
	inicializarArreglo();
	imprimirArreglo();
	return 0;
}

int validaEntero(const char mensaje[]){
	setlocale(LC_CTYPE,"spanish");
	int entero = 0, valida = 0;
	
	do{
		printf("%s",mensaje);
		valida = scanf("%d", &entero);
		fflush(stdin);
	}while(valida !=1 || entero <0);
	
	return entero;
}

void validaCadena(const char *mensaje, char cadena[]){
	bool bandera = true;
	
	while(bandera){
		printf("%s", mensaje);
		gets(cadena);
		fflush(stdin);
		if(strlen(cadena)>20){
			continue;
		}else{
			for(int i=0; i<strlen(cadena); i++){
				if(isalpha(cadena[i]) || cadena[i] == ' ' || isdigit(cadena[i])){
					if(i == strlen(cadena)-1){
						bandera = false;
					}
				}else break;
			}
		}
	}
}

void inicializarArreglo(){
	for(int i=0; i<10; i++){
		grupo[i].idGrupo = validaEntero("Ingresa el ID del Grupo: ");
		validaCadena("Ingresa el Semestre: ", grupo[i].semestre);
		
		grupo[i].docente.idDocente = validaEntero("Ingresa el ID del Docente: ");
		validaCadena("Ingresa el Nombre del Docente: ", grupo[i].docente.nomCompleto);
		validaCadena("Ingresa el Correo del Docente: ", grupo[i].docente.correo);
		validaCadena("Ingresa el NSS del Docente: ", grupo[i].docente.NSS);
		validaCadena("Ingresa la Fecha de Ingreso del Docente: ", grupo[i].docente.fechadeIngreso);
		
		grupo[i].alumno.idAlumno = validaEntero("Ingresa el ID del Alumno: ");
		validaCadena("Ingresa la Dirección del Alumno: ", grupo[i].alumno.direccion);
		validaCadena("Ingresa el Numero del Alumno: ", grupo[i].alumno.tel);
		validaCadena("Ingresa el Correo del Alumno: ", grupo[i].alumno.correo);
		printf("\n\n");
	}
}

void imprimirArreglo(){
	for(int i=0; i<10; i++){
		printf("ID del Grupo: %d\t", grupo[i].idGrupo);
		printf("Semestre: %s\n", grupo[i].semestre);
		
		printf("ID del Docente: %d\t", grupo[i].docente.idDocente);
		printf("Nombre del Docente: %s\t", grupo[i].docente.nomCompleto);
		printf("Correo del Docente: %s\t", grupo[i].docente.correo);
		printf("NSS del Docente: %s\t", grupo[i].docente.NSS);
		printf("Fecha de Ingreso del Docente: %s\n", grupo[i].docente.fechadeIngreso);
		
		printf("ID del Alumno: %d\t", grupo[i].alumno.idAlumno);
		printf("Dirección del Alumno: %s\t", grupo[i].alumno.direccion);
		printf("Numero del Alumno: %s\t", grupo[i].alumno.tel);
		printf("Correo del Alumno: %ss\n", grupo[i].alumno.correo);
		
		printf("\n\n");
	}
}
