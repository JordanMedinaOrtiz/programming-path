//programa que despliega una secuencia de números enteros y su suma
Algoritmo Ciclo_Repetir
	definir n,i, suma como entero;
	escribir "Indica cuantos términos de la serie:" ;
	leer n; //número de elementos de la serie
	i=1; //contador
	suma=0; //acumulador
	Repetir //El ciclo repetir se ejecuta de 1 a n veces
		escribir i;
		suma=suma+i;
		i=i+1;
	Hasta Que i>n o i>10000;
	escribir "Fin del ciclo, la suma es:", suma;
	
FinAlgoritmo
