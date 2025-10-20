//Algoritmo de cajero Jordan Medina Ortíz 179913
Algoritmo Cajero
	
	Definir B500,B200,B100,B50,B20,M10,M5,M2,M1,Importe Como Entero;
	Escribir "Introduce cantidad a retirar";
	Leer Importe;
	B500=0;
	B200=0;
	B100=0;
	B50=0;
	B20=0;
	M10=0;
	M5=0;
	M2=0;
	M1=0;
	
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
	
	Mientras Importe>=50 Hacer
		B50=B50+1;
		Importe=Importe-50;
	Fin Mientras
	
	Mientras Importe>=20 Hacer
		B20=B20+1;
		Importe=Importe-20;
	Fin Mientras
	
	Mientras Importe>=10 Hacer
		M10=M10+1;
		Importe=Importe-10;
	Fin Mientras
	
	Mientras Importe>=5 Hacer
		M5=M5+1;
		Importe=Importe-5;
	Fin Mientras
	
	Mientras Importe>=2 Hacer
		M2=M2+1;
		Importe=Importe-2;
	Fin Mientras
	
	Mientras Importe>=1 Hacer
		M1=M1+1;
		Importe=Importe-1;
	Fin Mientras
	
	
	Escribir "Los billtes de 500 son: ",B500;
	Escribir "Los billtes de 200 son: ",B200;
	Escribir "Los billtes de 100 son: ",B100;
	Escribir "Los billtes de 50 son: ",B50;
	Escribir "Los billtes de 20 son: ",B20;
	Escribir "Las monedas de 10 son: ",M10;
	Escribir "Las monedas de 5 son: ",M5;
	Escribir "Las monedas de 2 son: ",M2;
	Escribir "Las monedas de 1 son: ",M1;
	
	
FinAlgoritmo