void crear_arch(){
	FILE *arch = NULL;
	//c:\VTRoot\HarddiskVolume3\Users\179913\Desktop\progra2\pilasycolas
	if(!(arch=fopen("archivo.xls", "w"))){
		printf("Error al intentar crear archivo");
		exit(1);
	}
	
	for(int i=0; i<T; i++){
		fprintf(arch, "%d\t", reg[i].dat.matricula);
		fprintf(arch, "%s\t", reg[i].dat.nombre);
		fprintf(arch, "%s\t", reg[i].dat.carrera);
		fprintf(arch, "%s\t", reg[i].materia);
		for(int j=0; j<3; j++){
			fprintf(arch, "%.2f\t", reg[i].calif[j]);
		}
		fprintf(arch, "%d\n", reg[i].semestre);	
	}
	fclose(arch);
}

void cargarArch(){
	FILE *arch = NULL;
	
	if(!(arch=fopen("archivo.xls", "r"))){
		printf("Error al intentar leer el archivo");
		exit(1);
	}
	
	while(!feof(arch)){
		fscanf(arch, "%d\t", &reg[tope].dat.matricula);
		fscanf(arch, "%[^\t]\t", reg[tope].dat.nombre);
		fscanf(arch, "%[^\t]\t", reg[tope].dat.carrera);
		fscanf(arch, "%[^\t]\t", reg[tope].materia);
		for(int j=0; j<3; j++){
			fscanf(arch, "%f\t", &reg[tope].calif[j]);	
		}
		fscanf(arch, "%d\n", &reg[tope].semestre);
		tope++;
	}
	fclose(arch);
}

void actualizarArchivo(){
	FILE *arch = NULL;
	
	if(!(arch = fopen("archivo.xls", "w"))){
		printf("Error al intentar crear el archivo");
		exit(1);
	}
	
	for(int i=0; i<T; i++){
		fprintf(arch, "%d\t", reg[i].dat.matricula);
		fprintf(arch, "%s\t", reg[i].dat.nombre);
		fprintf(arch, "%s\t", reg[i].dat.carrera);
		fprintf(arch, "%s\t", reg[i].materia);
		for(int j=0; j<3; j++){
			fprintf(arch, "%.2f\t", reg[i].calif[j]);
		}
		fprintf(arch, "%d\n", reg[i].semestre);	
	}
	
	fclose(arch);
}
