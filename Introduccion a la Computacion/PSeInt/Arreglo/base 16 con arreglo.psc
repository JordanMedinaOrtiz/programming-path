//Jordan Medina Ortiz 179913
Algoritmo Algoritmo_para_convertir_de_base_10_a_16
	
	Definir n,residuo,bits,contador,i,num Como Entero;
	
	Escribir "Ingresa el numero que seseas convertir en base 16";
	Leer n;
	
	num=trunc(Ln(n)/Ln(16)+1); //Calcular cuantas posiciones necesito
	Dimension bits[n];
	Contador=0;
	
	Mientras n<>0 
		
		residuo=n%16;
		bits[contador]=residuo;
		n=trunc(n/16);
		contador=contador+1;
		
	FinMientras
	
	Para i=contador-1 Hasta 0 Con Paso -1 
		
		Segun bits[i]
			
			10:
				Escribir SinSaltar " A ";
			11: 
				Escribir SinSaltar " B ";
			12:	
				Escribir SinSaltar " C ";
			13: 
				Escribir SinSaltar " D ";
			14:
				Escribir SinSaltar " E ";
			15: 
				Escribir SinSaltar " F ";
			De Otro Modo:
				Escribir SinSaltar bits[i] " ";
		FinSegun
		
	FinPara
	
FinAlgoritmo