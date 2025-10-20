//Jordan Medina Ortiz 179913 - Practica 7 - Programacion 2 - Grupo A 2:00PM a 4:00PM - Arreglos bidimensionales dinámicos
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

char** crearHorario(int dias, int horas){
	char** horario = (char**)malloc(dias * sizeof(char*));
	for(int i=0; i<dias; i++){
		horario[i] = (char*)malloc(horas * sizeof(char));
		for(int j=0; j<horas; j++){
			horario[i][j] = ' ';
		}
	}
	printf("Horario creado %d dias x %d horas.\n", dias, horas);
	return horario;
}

void asignarClase(char **horario, int dias, int horas){
	int dia = 1 + rand()%dias;
	int hora = 1 + rand()%horas;
	int aux = 1 + rand()%7;
	char materia[20];
	
	if(aux == 1) strcpy(materia, "Programación");
	else if(aux == 2) strcpy(materia, "Matematicas");
	else if(aux == 3) strcpy(materia, "Fisica");
	else if(aux == 4) strcpy(materia, "Quimica");
	else if(aux == 5) strcpy(materia, "CNO");
	else if(aux == 6) strcpy(materia, "CNG");
	else if(aux == 7) strcpy(materia, "Ingles");
	
	if(horario[dia-1][hora-1] == ' '){
		horario[dia-1][hora] = materia[0];
		printf("Día aleatorio (1-%d) y hora aleatoria (1-%d) para asignar una clase.\n", dias, horas);
		printf("--Día: %d\n", dia);
		printf("--Hora: %d\n", hora);
		printf("Clase aleatoria asignada: %s\n", materia);
		printf("--------------------\n");
		printf("Clase asignada: %s el día %d a las %d", materia, dia, hora);
	}else printf("Ya hay una clase asignada a este dia y a esta hora\n");
	
}

void mostrarHorario(char **horario, int dias, int horas){
	printf("Horario de clases:\n\t");
	for(int j=0; j<horas; j++){
		printf("%d\t", j+1);
	}
	printf("\n");
	for(int i=0; i<dias; i++){
		printf("%d- ", i+1);
		for(int j=0; j<horas; j++){
			printf("%c\t", horario[i][j]);
		}
		printf("\n");
	}
	
}

void modificarClase(char **horario, int dias, int horas){
	int aux = 1 + rand()%7;
	char materia[20];
	int diaModificar, horaModificar;
	
	printf("Ingrese el día (1-%d) y la hora (1-%d) para modificar la clase.\n", dias, horas);
	scanf("%d %d", &diaModificar, &horaModificar);
	printf("--Día: %d\n", diaModificar);
	printf("--Hora: %d\n", horaModificar);
	
	if(diaModificar >= 1 && diaModificar <= dias && horaModificar >= 1 && horaModificar <= horas){
		if(horario[diaModificar - 1][horaModificar] != ' '){
			printf("Clase actual: %c\n", horario[diaModificar - 1][horaModificar]);
			if (aux == 1) strcpy(materia, "Programación");
			else if (aux == 2) strcpy(materia, "Matematicas");
			else if (aux == 3) strcpy(materia, "Fisica");
			else if (aux == 4) strcpy(materia, "Quimica");
			else if (aux == 5) strcpy(materia, "CNO");
			else if (aux == 6) strcpy(materia, "CNG");
			else if (aux == 7) strcpy(materia, "Ingles");
					
			printf("Clase modificada: %s el día %d a las %d\n", materia, diaModificar, horaModificar);
			horario[diaModificar - 1][horaModificar] = materia[0];
		}else{
			printf("No hay una clase asignada en el día %d a las %d\n", diaModificar, horaModificar);
		}
	}else{
		printf("Día u hora fuera de rango. Ingrese valores válidos.\n");
	}
}

int main(){
	setlocale(LC_CTYPE, "spanish");
	srand(time(NULL));
	int dias = 0, horas = 0;
	int opc = 0, valida = 0, entero = 0;
	char **horario = NULL;
	
	while(opc != 5){
		system("cls");
		printf("Sistema de Gestión de Horario de Clases.\n");
		printf("1. Crear Horario.\n2. Asignar Clase.\n3. Mostrar Horario.\n4. Modificar Clases.\n5. Salir.\n");
		
		do{
			printf("Selecciona una opción: ");
			valida = scanf("%d", &entero);
			opc = entero;
			fflush(stdin);
		}while(valida != 1 || entero <= 0 || entero > 5);
		
		switch(opc){
			case 1:
				printf("Introduce el número de dias a la semana: ");
				scanf("%d", &dias);
				printf("Introduce el número de horas disponibles por día: ");
				scanf("%d", &horas);
				horario = crearHorario(dias, horas);
				getch();
				system("cls");
				break;
			case 2:
				asignarClase(horario, dias, horas);
				getch();
				system("cls");
				break;
			case 3: 
				mostrarHorario(horario, dias, horas);
				getch();
				system("cls");
				break;
			case 4:
				modificarClase(horario, dias, horas);
				getch();
				system("cls");
				break;
			case 5:
				printf("Saliste del programa :(");
				exit(1);
		}	
	}
	
	return 0;
}
