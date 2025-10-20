void pedirDatos(char nombre, char apellidos, float promedio){
	char *pnombre;
	char *papellidos;
	float *ppromedio;
	float inscripcion = 8000;
	pnombre = &nombre;
	papellidos = &apellidos;
	ppromedio = &promedio;
	
	*pnombre = validaLetras("Introduce nombre del estudiante: " , pnombre);
	*papellidos = validaLetras("Introduce apellidos del estudiante: ", papellidos);
	*ppromedio = validaPromedio("Introduce promedio del estudiante: ");
	
	printf("\n\nNombre del estudiante: %s", pnombre);
	printf("\nApellidos del estudiante: %s", papellidos);
	printf("\nPromedio del estudiante: %.2f", *ppromedio);
	printf("\nLa inscripcion es de: %.2f", inscripcion);
	
	if(*ppromedio >= 8.5){
		inscripcion = inscripcion/2;
		printf("\nBeca obtenida\nCosto de inscripcion a pagar: %.2f", inscripcion);
	}
}
