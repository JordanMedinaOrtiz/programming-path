#include <stdio.h>
#include <conio.h>
#include <locale.h>

//directiva - macro - variable simb�lica
#define AUTOR "Jodan Medina Ortiz"
const char UNI[]= "UPSLP";
const char CARRERA[]= "ITI";
#define MACRO printf("\nMacro/Constante simb�lica");
#define s scanf
#define p printf
#define T 8

///constante global const poseen un tipo de dato asociado
const int VALOR=10;
//variable global
int numero=1;
//�mbito de variable, depende de d�nde se declare una variable, ser� donde se pueda usar
//Indentificadores (variables, constantes) y palabras clave(reservadas)
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int opc=0; //variable local
	
	p("\n\t\t%s\n",AUTOR);
	p("\t\t%s\n",UNI);
	p("\t\t%s\n\n",CARRERA);
	p("\nIntroduce la opci�n: 5-10-8-2 ->");
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
		p("\nConstante simb�lica %i",T);
		getch();
	}
	
	if(opc==2){
		p("\nVariable local %i",opc);
		getch();
	}
	
	return 0;
} 
