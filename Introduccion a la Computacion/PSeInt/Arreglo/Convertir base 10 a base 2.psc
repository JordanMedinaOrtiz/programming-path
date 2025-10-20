//Algoritmo para convertir de base 10 a base2 
Algoritmo Algoritmo_para_convertir_de_base_10_a_2
	
	Definir n,residuo Como Entero;
	
	Escribir "Que numero deseas calcular";
	Leer n;
	
	Mientras n<>0 
		
		residuo=n%2;
		n=trunc(n/2);
		Escribir SinSaltar residuo " ";
		
	FinMientras
	
FinAlgoritmo