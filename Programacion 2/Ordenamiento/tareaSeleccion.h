void recibeTarea(Datos **reg){	
	for(int i=0; i<f; i++){
		cout<<"Fila-Apuntador["<<i<<"]"<<endl;
		c = validaEntero("No. registros: ");
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
			(*(reg+i)+j)->dat.promedio = ( ((*(reg+i)+j)->dat.calif[0] + (*(reg+i)+j)->dat.calif[1] + (*(reg+i)+j)->dat.calif[2])/3);
			system("cls");
		}
	}
}

void imprimeTarea(Datos **reg){
	SetConsoleCP(1252); //STDIN codificaciï¿½n de windows 1252
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
			cout<<setw(15)<<(*(reg+i)+j)->dat.promedio;
			cout<<endl;
		}
		cout<<endl;
	}
	system("cls");
	archivo("Original.xls", reg);
	imprimeArchivo("Original.xls");
}

void ordenaSeleccionMatricula(Datos **reg){
	for(int fila=0; fila<f; fila++){
		Datos aux;
		int min=0;
		for(int i=0; i<tam[fila]; i++){
			min = i;
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
	
	archivo("Matricula.xls", reg);
	imprimeArchivo("Matricula.xls");
}

void ordenaSeleccionNombre(Datos **reg){
	
	for(int fila=0; fila<f; fila++){
  		Datos aux;
  		int min=0;
  		for(int i=0; i<tam[fila]; i++){
  			min = i;
  			for(int j=i+1; j<tam[fila]; j++){
		        if(j >= 0 && strcmp((*(reg+fila)+min)->nombre, (*(reg+fila)+j)->nombre) > 0) {
		            min = j;
				}
            }
			aux = *(*(reg+fila)+i);
	  		*(*(reg+fila)+i) = *(*(reg+fila)+min);
	  		*(*(reg+fila)+min) = aux;
       }
   }
	archivo("Nombre.xls", reg);
	imprimeArchivo("Nombre.xls");
}

void ordenaSeleccionEdad(Datos **reg){
	for(int fila=0; fila<f; fila++){
		Datos aux;
		int min=0;
		for(int i=0; i<tam[fila]; i++){
			min = i;
			for(int j=i+1; j<tam[fila]; j++){
				if((*(reg+fila)+min)->edad > (*(reg+fila)+j)->edad){
					min = j;
				}
			}
			aux = *(*(reg+fila)+i);
			*(*(reg+fila)+i) = *(*(reg+fila)+min);
			*(*(reg+fila)+min) = aux;
		}
	}
	archivo("Edad.xls", reg);
	imprimeArchivo("Edad.xls");
}

void ordenaSeleccionCarrera(Datos **reg){
	
	for(int fila=0; fila<f; fila++){
  		Datos aux;
  		int min=0;
  		for(int i=0; i<tam[fila]; i++){
  			min = i;
  			for(int j=i+1; j<tam[fila]; j++){
		        if(j >= 0 && strcmp((*(reg+fila)+min)->dat.carrera, (*(reg+fila)+j)->dat.carrera) > 0) {
				}
            }
			aux = *(*(reg+fila)+i);
	  		*(*(reg+fila)+i) = *(*(reg+fila)+min);
	  		*(*(reg+fila)+min) = aux;
       }
   }
	archivo("Carrera.xls", reg);
	imprimeArchivo("Carrera.xls");
}

void ordenaSeleccionPromedio(Datos **reg){
	for(int fila=0; fila<f; fila++){
		Datos aux;
		int min=0;
		for(int i=0; i<tam[fila]; i++){
			min = i;
			for(int j=i+1; j<tam[fila]; j++){
				if((*(reg+fila)+min)->dat.promedio > (*(reg+fila)+j)->dat.promedio){
					min = j;
				}
			}
			aux = *(*(reg+fila)+i);
			*(*(reg+fila)+i) = *(*(reg+fila)+min);
			*(*(reg+fila)+min) = aux;
		}
	}
	archivo("Promedio.xls", reg);
	imprimeArchivo("Promedio.xls");
}

void seleccion(Datos **reg){
		while(opc != 7){
		cuadro(55, 1, 65, 3, 7);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),1);
		centrarTexto("Original", 2);
		centrarTexto("Matricula", 5);
		centrarTexto("Nombre", 8);
		centrarTexto("Edad", 11);
		centrarTexto("Carrera", 14);
		centrarTexto("Promedio", 17);
		centrarTexto("Salir", 20);
		menu(54,2,1,7);
		system("cls");
		switch(opc){
			case OPC1:
				imprimeTarea(reg);
				getch();
				system("cls");
				break;
			case OPC2:
				ordenaSeleccionMatricula(reg);
				getch();
				system("cls");
				break;
			case OPC3:
				ordenaSeleccionNombre(reg);
				getch();
				system("cls");
				break;
			case OPC4:
				ordenaSeleccionEdad(reg);
				getch();
				system("cls");
				break;
			case OPC5:
				ordenaSeleccionCarrera(reg);
				getch();
				system("cls");
				break;
			case OPC6:
				ordenaSeleccionPromedio(reg);
				getch();
				system("cls");
				break;
			case OPC7:
				printf("SALISTE :(");
				exit(1);
		}
	}
}
