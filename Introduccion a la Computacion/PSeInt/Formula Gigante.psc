Algoritmo Formula_gigante
	
	Definir x,y1,z,r Como Real;
	
	Escribir "Introduce x de 1 a 100";
	Repetir
		Leer x;
	Hasta Que x>=1 y x<=100
	
	Escribir "Introduce y de 1 a 100";
	Repetir
		Leer y1;
	Hasta Que y1>=1 y y1<=100
	
	Escribir "Introduce z de 1 a 100";
	Repetir
		Leer z;
	Hasta Que z>=1 y z<=100
	
	r=(((2*x+y1)/z)*(y1^3-z))/((x+2*y1+3*z)/(z-2*y1-3*x)+x^2+z^2);  
	
	
	Escribir "El resultado es: " r;
	
FinAlgoritmo