void recibeU(Datos *reg){
	for(int i=0; i<c; i++){
		(*(reg+i)).dat.matriculas = validaMatricula("Matricula: ");
		validaCadena("Nombre: ", (*(reg+i)).nombre, 20);
		(*(reg+i)).edad = validaEntero("Edad: ");
		validaCadena("Carrera: ", (*(reg+i)).dat.carrera, 30);
		(*(reg+i)).dat.calif[0] = validaFlotante("Calif. 1: ");
		(*(reg+i)).dat.calif[1] = validaFlotante("Calif. 2: ");
		(*(reg+i)).dat.calif[2] = validaFlotante("Calif. 3: ");
		system("cls");
	}
}

void imprimeU(Datos *reg){
	for(int i=0; i<c; i++){
		printf("%d\t", (*(reg+i)).dat.matriculas);
		printf("%s\t", (*(reg+i)).nombre);
		printf("%d\t", (*(reg+i)).edad);
		printf("%s\t", (*(reg+i)).dat.carrera);
		printf("%.2f\t", (*(reg+i)).dat.calif[0]);
		printf("%.2f\t", (*(reg+i)).dat.calif[1]);
		printf("%.2f\n", (*(reg+i)).dat.calif[2]);
	}
}

void ordenaSeleccionU(Datos *reg){
	Datos aux;
	int min = 0;
	for(int i=0; i<c; i++){
		min = 1;
		for(int j=i+1; j<c; j++){
			if((*(reg+min)).dat.matriculas > (*(reg+j)).dat.matriculas){
				min = j;
			}
		}
		aux = *(reg+i);
		*(reg+i) = *(reg+min);
		*(reg+min) = aux;
	}
	printf("\n\nDatos Ordenados:");
}
