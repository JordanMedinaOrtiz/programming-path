//Jordan Medina Ortiz 179913 progama que calcula una ecuacion de cramer
Algoritmo Ecuacion_de_Cramer
	Definir a,b,e,c,d,f,x1,y1 como real;
	
	Escribir "Introduce a";
	Leer a;
	Escribir "Introduce b";
	Leer b;
	Escribir "Introduce e";
	Leer e;
	Escribir "Introduce c";
	Leer c;
	Escribir "Introduce b";
	Leer d;
	Escribir "Introduce f";
	Leer f;
	
	Si (a*d-b*c)=0 Entonces
		Escribir "No hay soluciones";
	SiNo
		x1= (e*d-b*f)/(a*d-b*c);
		y1= (a*f-e*c)/(a*d-b*c);
		Escribir "El valor de X es:",x1;
		Escribir "El valor de Y es:",y1;
	Fin Si
	
FinAlgoritmo
