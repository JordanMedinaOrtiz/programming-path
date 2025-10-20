//Jordan Medina Ortiz 179913 Numero Primo
Algoritmo Numero_Primo
	
	Definir primo Como Logico;
	Definir n,x Como Entero;
	
	Escribir "Introduce el valor que deseas saber si es primo";
	Leer n;
	
	x=2;
	Primo=Verdadero;
	
	Mientras Primo=verdadero y x<n 
		
		Si n%x=0 Entonces 
			Primo=Falso;
		FinSi
		
		x=x+1;
		
	FinMientras
	
	Si Primo=Falso Entonces 
		Escribir "El numero no es primo";
	Sino 
		Escribir "El numero es primo"; 
	FinSi
	
FinAlgoritmo
