Algoritmo Menu
	
	Definir op Como Entero;
	
	Repetir
		Limpiar Pantalla;
		Escribir "Menu: ";
		Escribir "1.- Opci�n A";
		Escribir "2.- Opci�n B";
		Escribir "3.- Opci�n C";
		Escribir "0.- Salir";
		Leer op;
		
		Segun Op Hacer
			1:
				Escribir "Seleccionaste la opcion A";
			2:
				Escribir "Seleccionaste la opcion B";		
			3:
				Escribir "Seleccionaste la opcion C";
			0:
				Escribir "Fin";
			De Otro Modo:
				Escribir "Seleccionaste una opcion valida";
		Fin Segun
		
		Escribir "Presiona alguna tecla para continuar";
		Esperar Tecla;
		
	Hasta Que op=0;
	
	Escribir "Adios";
	
FinAlgoritmo
