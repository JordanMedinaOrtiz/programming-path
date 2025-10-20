#include <stdio.h>
#include <locale.h>
#include <windows.h>
//Jordan Medina Ortiz
//179913
//ITI, 2do semestre, Programación 1
//Evidencia Semana 3
enum DIAS { OPC1=1, OPC2, OPC3, OPC4, OPC5, OPC6, OPC7 };

int main(){
	setlocale(LC_CTYPE,"Spanish");
	int dia=0, sigue=0, valida=0;
	
	do{
		system("cls");
		printf("\nDías de la semana\nSeleccioana del 1 al 7");
		
		do{
			printf("\nDía: ");
			valida = scanf("%d", &dia);
			fflush(stdin);
		}while(valida!=1);
		
		switch(dia){
			case OPC1: 
				printf("\n   Lunes ");
				break;
			case OPC2:
				printf("\n   Martes ");
				break;
			case OPC3:
				printf("\n   Miercoles ");
				break;
			case OPC4:
				printf("\n   Jueves ");
				break;
			case OPC5:
				printf("\n   Viernes ");
				break;
			case OPC6:
				printf("\n   Sabado");
				break;
			case OPC7:
				printf("\n   Domingo: ");						
				break;
			default:
				printf("\n ERROR");
				break; 	
		}
		
		do{
			printf("\n1->Para volver a ejecutar/2->Para terminar: ");
			valida = scanf("%d", &sigue);
			fflush(stdin);
		}while( !(sigue >=1 && sigue <=2) || valida!=1);
		
	}while(sigue==1);
	
	return 0;
}
