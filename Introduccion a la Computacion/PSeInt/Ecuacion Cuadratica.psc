//Jordan Medina Ortiz 179913 Programa para resolver ecuaciones cuadraticas
Algoritmo Ecuacion_Cuadratica
	Definir a,b,c,x1,x2 Como Real;
	
	Escribir "Introduce el valor de a";
	Leer a;
	Escribir "Introduce el valor de b";
	Leer b;
	Escribir "Introduce el valor de c";
	Leer c;
	x1= (-b+raiz(b^2-4*a*c))/(2*a);
	x2= (-b-raiz(b^2-4*a*c))/(2*a);
	Escribir "El valor de X1 es:",x1;
	Escribir "El valor de X2 es:",x2;
	
FinAlgoritmo