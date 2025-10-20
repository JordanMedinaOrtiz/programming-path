//Jordan Medina Ortiz Actividad Generar numeros aleatorios entre -100 y 100 hasta que encuentre el -99 e indica el numero mayor
Algoritmo Actividad_3_13
	
	Definir i,n,may Como Entero;
	may=0;
	
	hacer 
		n=Aleatorio(-100,100);
		Si n>may
			may=n;
		FinSi
		Escribir "El numero aleatorio es: ",n;
	Hasta Que n=-99; 
	Escribir "El mayor es: ",may;
	
FinAlgoritmo
