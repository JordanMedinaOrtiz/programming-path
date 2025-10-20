//Jordan Medina Ortiz 
Algoritmo Numeros_Primos
	
	Definir primo Como Logico;
	Definir n,x,h Como Entero;
	
	Escribir "Introduce el valor que deseas saber si es primo";
	Leer h;

	Para x=2 Hasta h Hacer 
		
		Primo=verdadero;
		Para x=2 Hasta n-1 Hacer 
			Si n%x=0 Entonces 
				Primo=Falso;
			FinSi
			Si Primo=Verdadero Entonces
				Escribir "El numero",h,"es primo";
				
			FinSi
			FinPara
		
	FinPara
	
FinAlgoritmo
