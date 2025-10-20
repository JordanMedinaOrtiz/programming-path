#include <stdio.h>
#include <conio.h>
#include <locale.h>

//directiva - macro - variable simbólica
#define AUTOR "Jodan Medina Ortiz"
const char UNI[]= "UPSLP";
const char CARRERA[]= "ITI";
#define MACRO printf("\nMacro/Constante simbólica");
#define s scanf
#define p printf
#define T 8

///constante global const poseen un tipo de dato asociado
const int VALOR=10;
//variable global
int numero=1;
//Ámbito de variable, depende de dónde se declare una variable, será donde se pueda usar
//Indentificadores (variables, constantes) y palabras clave(reservadas)
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int opc=0; //variable local
	
	p("\n\t\t%s\n",AUTOR);
	p("\t\t%s\n",UNI);
	p("\t\t%s\n\n",CARRERA);
	p("\nIntroduce la opción: 5-10-8-2 ->");
	s("%d",&opc);

	if(opc==5){
		MACRO;
		getch();

	}
	
	if(opc==VALOR){
		p("\nConstante global  %i", VALOR);
		getch();
	}
	
	if(opc==T){
		p("\nConstante simbólica %i",T);
		getch();
	}
	
	if(opc==2){
		p("\nVariable local %i",opc);
		getch();
	}
	
	return 0;
} 
