//Año_Comercial Jordan Medina Ortiz 179913
Algoritmo Ano_comercial
	
	Definir Anos,Meses,Quincenas,Semanas,Dias Como Entero;
	
	Anos=0;
	Meses=0;
	Quincenas=0;
	Semanas=0;
	
	Escribir "Introduce los dias que deseas covertir";
	Leer Dias;
	
	Mientras Dias>=360 Hacer
		Anos=Anos+1;
		Dias=Dias-360;
	Fin Mientras
	
	Mientras Dias>=30 Hacer
		Meses=Meses+1;
		Dias=Dias-30;
	Fin Mientras
	
	Mientras Dias>=15 Hacer
		Quincenas=Quincenas+1;
		Dias=Dias-15;
	Fin Mientras
	
	Mientras Dias>=7 Hacer
		Semanas=Semanas+1;
		Dias=Dias-7;
	Fin Mientras
	
	Escribir "Los años son: ",Anos;
	Escribir "Los meses son: ",Meses;
	Escribir "Las quincenas son: ",Quincenas;
	Escribir "Las semanas son: ",Semanas;
	Escribir "Los dias son: ",Dias;
	
FinAlgoritmo
