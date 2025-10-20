//Jordan Medina Ortiz 179913 Introduccion a la computación.
Algoritmo Calcular_Area_Triangulo_Trapecio_Circulo
	
	Definir op Como Entero;
	Definir area,radio,base_mayor,base_menor,altura,base Como real;
	
	Repetir
		Limpiar Pantalla;
		Escribir "Que area deseas calcular: ";
		Escribir "1.- Triangulo";
		Escribir "2.- Trapecio";
		Escribir "3.- Circulo";
		Escribir "0.- Salir";
		Leer op;
		
		Segun Op Hacer
			1:
				Escribir "Selecionaste sacar el area del triangulo";
				Escribir "Ingresa base";
				Leer base;
				Escribir "Ingresa altura";
				Leer altura;
				area= (base*altura)/2;
				Escribir "El area del triangulo es:" ,area;
			2:
				Escribir "Ingresa base mayor";
				Leer base_mayor;
				Escribir "Ingresa base menor";
				Leer base_menor;
				Escribir "Ingresa altura";
				Leer altura;
				area= ((base_mayor+base_menor)*altura)/2;
				Escribir "El area del trapecio es:",area;
			3:
				Escribir "Introduce radio";
				Leer radio;
				area= 3.1416*radio^2;
				Escribir "El area del circulo es:",area;
			0:
				Escribir "Fin";
			De Otro Modo:
				Escribir "Selecciona una opcion valida";
		Fin Segun
		
		Escribir "Presiona alguna tecla para continuar";
		Esperar Tecla;
		
	Hasta Que op=0;
	
	Escribir "Adios";
	
FinAlgoritmo