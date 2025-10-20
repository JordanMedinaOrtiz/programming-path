void alta(registro reg[]){
	for(int i=0; i<tam; i++){
		reg[i].dat.matricula = validaEnteros("Matricula: ");
		validaCadenas("Nombre: ", reg[i].dat.nombre, 20);
		validaCadenas("Carrera: ", reg[i].dat.carrera, 20);
		validaCadenas("Materia: ", reg[i].materia, 20);
		for(int j=0; j<3; j++){
			reg[i].calif[j] = validaFlotantes("Calificacion Parcial: ");
		}
		reg[i].semestre = validaEnteros("Semestre: ");
		printf("\n");
	}
}

void imprime(registro info[]){
	for(int i=0; i<tam; i++){
		printf("%d\t", info[i].dat.matricula);
		printf("%s\t", info[i].dat.nombre);
		printf("%s\t", info[i].dat.carrera);
		printf("%s\t", info[i].materia);
		for(int j=0; j<3; j++){
			printf("%.2f\t", info[i].calif[j]);
		}
		printf("%d\n", info[i].semestre);
	}
}

//void registrar(registros reg[][]){
//	for(int i=0; i<tamColumnas; i++){
//		for(int j=0; j<tamFilas; j++){
//			regs[i][j].matricula = validaEnteros("Matricula: ");
//			regs[i][j].edad = validaEnteros("Edad: ");
//			regs[i][j].semestre = validaEnteros("Semestre: ");
//		}
//		printf("\n");
//	}
//}
