//Programa que me muestra serie de n�meros del 1 hasta n
Algoritmo Ciclo_Mientras
	definir i,n,suma como entero;
	i=1; // inicio la variable i con el 1 
	suma=0;
	escribir "Dime hasta que n�mero quieres que despliegue: ";
	leer n; //n es la variable que indica hasta donde se va a desplegar
	//con este ciclo desplegamos consecutivos
	Mientras i<= n //incia el ciclo, se ejecuta mientras se cumpla la condici�n
		escribir i;
		suma=suma+i; //acumulador
		i=i+1; //incremento el valor de la variable i en 1
	FinMientras //termina el ciclo cuando la condici�n ya no se cumple
	escribir "Fin de la lista consecutiva, la suma es:",suma; //mensaje que indica que sali� del ciclo
	//con este ciclo desplegamos pares
	i=0; // inicio la variable i con el 0 
	Mientras i<= n //incia el ciclo, se ejecuta mientras se cumpla la condici�n
		escribir i; 
		i=i+2; //incremento el valor de la variable i en 2 para que me de pares
	FinMientras //termina el ciclo cuando la condici�n ya no se cumple
	escribir "Fin de la lista de pares"; //mensaje que indica que sali� del ciclo
	//con este ciclo desplegamos impares
	i=1; // inicio la variable i con el 1 para que me impares 
	Mientras i<= n //incia el ciclo, se ejecuta mientras se cumpla la condici�n
		escribir i; 
		i=i+2; //incremento el valor de la variable i en 2 para que me de pares
	FinMientras //termina el ciclo cuando la condici�n ya no se cumple
	escribir "Fin de la lista de impares";//mensaje que indica que sali� del ciclo
FinAlgoritmo
