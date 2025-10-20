//Jordan Medina Ortiz Año bisiesto 
Algoritmo Ano_bisiesto 
	
	Definir p,q,r,n como real;
	
	Escribir "Introduce el año";
	Leer n;
	
	Si n%4=0 y(no(n%100=0)o n%400=0) Entonces
		Escribir "El año es bisiesto";
	Sino
		Escribir "El año no es bisiesto";
	FinSi
	
FinAlgoritmo