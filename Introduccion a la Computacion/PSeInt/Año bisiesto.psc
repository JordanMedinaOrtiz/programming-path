//Jordan Medina Ortiz A�o bisiesto 
Algoritmo Ano_bisiesto 
	
	Definir p,q,r,n como real;
	
	Escribir "Introduce el a�o";
	Leer n;
	
	Si n%4=0 y(no(n%100=0)o n%400=0) Entonces
		Escribir "El a�o es bisiesto";
	Sino
		Escribir "El a�o no es bisiesto";
	FinSi
	
FinAlgoritmo