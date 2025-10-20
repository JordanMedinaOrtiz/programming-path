//Ejerccio 3.12 Jordan Medina Ortiz 179913
Algoritmo Ejercicio_3_12
	
	Definir pares,impares,i Como Entero;
	
	pares=0;
	impares=0;
	
	Para i<-1 Hasta 200 Hacer 
		Si i % 2=0 Entonces
			pares=pares+i;
		Sino
			impares=impares+i;
		FinSi
		
	Fin Para
	Escribir "La suma de los pares es:",pares;
	Escribir "La suma de los impares es:",Impares;
	
FinAlgoritmo