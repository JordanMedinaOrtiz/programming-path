//Arreglo 1
Algoritmo Arreglo_1
	
	Definir i,datos Como Entero;
	
	Dimension datos[5]; 
	
	datos[0]=2;
	datos[1]=4;
	datos[2]=6;
	datos[3]=8;
	datos[4]=10;	
	
	Para i=0 Hasta 4 Hacer
		Escribir datos[i];
	FinPara
	
	Escribir " ";
	
	Para i=4 Hasta 0 Con Paso -1 Hacer
		Escribir datos[i];
	FinPara
	
FinAlgoritmo