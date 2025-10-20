//Algoritmo de cajero Jordan Medina Ortíz 179913
Algoritmo Cajero
	
	Definir B500,B200,B100,Importe Como Entero;
	Escribir "Introduce cantidad a retirar";
	Leer Importe;
	B500=0;
	B200=0;
	B100=0;
	
	Mientras Importe>=500 Hacer
		B500=B500+1;
		Importe=Importe-500;
	Fin Mientras
	
	Mientras Importe>=200 Hacer
		B200=B200+1;
		Importe=Importe-200;
	Fin Mientras
	
	Mientras Importe>=100 Hacer
		B100=B100+1;
		Importe=Importe-100;
	Fin Mientras
	
	Escribir "Los billtes de 500 son: ",B500;
	Escribir "Los billtes de 200 son: ",B200;
	Escribir "Los billtes de 100 son: ",B100;
	
FinAlgoritmo
