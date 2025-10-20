void archivo(const char archivo[], Datos **reg){
	FILE *arch=NULL;

	if(!(arch=fopen(archivo,"a+"))){
		printf("Error, no se pudo crear el archivo");
		exit(1);
	}

	for(int i=0;i<f;i++){
		for(int j=0;j<tam[i];j++){
			fprintf(arch,"%d\t",(*(reg+i)+j)->dat.matriculas);
			fprintf(arch,"%s\t",(*(reg+i)+j)->nombre);
			fprintf(arch,"%d\t",(*(reg+i)+j)->edad);
			fprintf(arch,"%s\t",(*(reg+i)+j)->dat.carrera);
			fprintf(arch,"%.2f\t",(*(reg+i)+j)->dat.calif[0]);
			fprintf(arch,"%.2f\t",(*(reg+i)+j)->dat.calif[1]);
			fprintf(arch,"%.2f\t",(*(reg+i)+j)->dat.calif[2]);
			fprintf(arch,"%.2f\n",(*(reg+i)+j)->dat.promedio);

		}
	}
	fclose(arch);
	return;
}

void imprimeArchivo(const char archivo[]){	
	FILE *arch=NULL;
	Datos aux;
	
	if(!(arch=fopen(archivo,"r"))){
		printf("Error, no se pudo leer el archivo");
		exit(1);
	}
	
	while(!feof(arch)){
		fscanf(arch,"%d\t",&aux.dat.matriculas);
		fscanf(arch,"%[^\t]\t",aux.nombre);
		fscanf(arch,"%d\t",&aux.edad);
		fscanf(arch,"%[^\t]\t",aux.dat.carrera);
		fscanf(arch,"%f\t",&aux.dat.calif[0]);
		fscanf(arch,"%f\t",&aux.dat.calif[1]);
		fscanf(arch,"%f\t",&aux.dat.calif[2]);
		fscanf(arch,"%f\t",&aux.dat.promedio);
		
		cout<<setw(15)<<aux.dat.matriculas;
		cout<<setw(15)<<aux.nombre;
		cout<<setw(15)<<aux.edad;
		cout<<setw(15)<<aux.dat.carrera;
		for(int k=0; k<3; k++){
			cout<<setw(15)<<fixed<<setprecision(2)<<aux.dat.calif[k];
		}
		cout<<setw(15)<<aux.dat.promedio<<endl<<endl;
	}
	fclose(arch);
}
