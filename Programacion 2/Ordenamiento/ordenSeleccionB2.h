void recibeB2(Datos **reg){
	for(int i=0; i<f; i++){
		cout<<"Fila-Apuntador["<<i<<"]"<<endl;
		c = validaEntero("No. Registros: ");
		*(reg+i) = (Datos*)malloc(c * sizeof(Datos));
		tam[i] = c;
		for(int j=0; j<tam[i]; j++){
			(*(reg+i)+j)->dat.matriculas = validaMatricula("Matricula: ");
			validaCadena("Nombre: ", (*(reg+i)+j)->nombre, 20);
			(*(reg+i)+j)->edad = validaEntero("Edad: ");
			validaCadena("Carrera: ", (*(reg+i)+j)->dat.carrera, 20);
			(*(reg+i)+j)->dat.calif[0] = validaFlotante("Calif. 1: ");
			(*(reg+i)+j)->dat.calif[1] = validaFlotante("Calif. 2: ");
			(*(reg+i)+j)->dat.calif[2] = validaFlotante("Calif. 3: ");
			system("cls");
		}
	}
}

void imprimeB2(Datos **reg){
	SetConsoleCP(1252); //STDIN codificación de windows 1252
	SetConsoleOutputCP(1252); //STDOUT
	
	cout<<endl<<endl<<setw(15)<<"Ubicación"<<setw(15)<<"Matrícula"<<setw(15)<<"Nombre"<<setw(15)<<"Edad"<<setw(15)<<"Carrera"<<setw(15)<<"Calif. 1"<<setw(15)<<"Calif. 2"<<setw(15)<<"Calif. 3"<<endl<<endl;
	for(int i=0; i<f; i++){
		for(int j=0; j<tam[i]; j++){
			cout<<setw(10)<<"["<<i<<"]"<<"["<<j<<"]";
			cout<<setw(15)<<(*(reg+i)+j)->dat.matriculas;
			cout<<setw(15)<<(*(reg+i)+j)->nombre;
			cout<<setw(15)<<(*(reg+i)+j)->edad;
			cout<<setw(15)<<(*(reg+i)+j)->dat.carrera;
			for(int k=0; k<3; k++)
				cout<<setw(15)<<fixed<<setprecision(2)<<(*(reg+i)+j)->dat.calif[k];
			cout<<endl;
		}
		cout<<endl;
	}
}

void ordenaSeleccionB2(Datos **reg){
	for(int fila=0; fila<f; fila++){
		Datos aux;
		int min = 0;
		for(int i=0; i<tam[fila]; i++){
			min = 1;
			for(int j=i+1; j<tam[fila]; j++){
				if((*(reg+fila)+min)->dat.matriculas > (*(reg+fila)+j)->dat.matriculas){
					min = j;
				}
			}
			aux = *(*(reg+fila)+i);
			*(*(reg+fila)+i) = *(*(reg+fila)+min);
			*(*(reg+fila)+min) = aux;
		}
	}
}
