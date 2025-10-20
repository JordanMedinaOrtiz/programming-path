//Jordan Medina Ortiz 179913
Algoritmo Algoritmo_para_convertir_de_base_10_a_8
	
	Definir n,residuo,bits,contador,i,num Como Entero;
	
	Escribir "Ingresa el numero que seseas convertir en base 8";
	Leer n;
	
	num=trunc(Ln(n)/Ln(8)+1); //Calcular cuantas posiciones necesito
	Dimension bits[n];
	Contador=0;
	
	Mientras n<>0 
		
		residuo=n%8;
		bits[contador]=residuo;
		n=trunc(n/8);
		contador=contador+1;
		
	FinMientras
	
	Para i=contador-1 Hasta 0 Con Paso -1 
		
		Escribir SinSaltar bits[i] " ";
		
	FinPara
	
FinAlgoritmo