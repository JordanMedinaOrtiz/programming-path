//Jordan Medina Ortiz Calcular IMC
Algoritmo Calcular_IMC
	
	Definir IMC,estatura,peso,edad Como Real;
	
	
	Repetir 
		Limpiar Pantalla;
		
		Escribir "Calcula tu IMC";
		Escribir "Ingresa edad";
		Leer Edad;
		
		Si edad>=20 Entonces
			Escribir "Ingresa tu estatura en metros";
			Leer estatura;
			Escribir "Ingresa tu peso";
			Leer Peso;
			IMC= peso/(estatura^2);
			Si IMC<18.5 Entonces
				Escribir "Tu IMC es: ",IMC;
				Escribir "Bajo peso ";
			FinSi	
			Si IMC>=18.5 y IMC<=25 Entonces
				Escribir "Tu IMC es: ",IMC;
				Escribir "Normal ";
			FinSi
			Si IMC>=25.0 Y IMC<=30 Entonces
				Escribir "Tu IMC es: ",IMC;
				Escribir "Sobre peso ";
			FinSi
			Si IMC>=30 Entonces
				Escribir "Tu IMC es: ",IMC;
				Escribir "Obesidad";
			FinSi
			
			Escribir "¿Calcular otra IMC?";
			Esperar Tecla;
		SiNo
			Escribir "No hay calculo para tu edad";		
		FinSi
		Esperar Tecla;
	Hasta Que edad=0;
	
FinAlgoritmo