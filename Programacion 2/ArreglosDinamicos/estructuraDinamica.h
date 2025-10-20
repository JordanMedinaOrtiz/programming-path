void imprimeDinamicoU(Ejemplo *dato){
	cout<<setw(15)<<"Entero"<<setw(10)<<"Flotante"<<endl;
	for(int i=0; i<column; i++){
		cout<<setw(15)<<(*(dato+i)).entero;
		cout<<setw(10)<<setprecision(2)<<fixed<<(*(dato+i)).flotante<<endl;
	}
}

void recibeDinamicoU(Ejemplo *dato){
	for(int i=0; i<column; i++){
		//dato[i].entero = validaEntero("Entero: ");
		(*(dato+i)).entero = validaEntero("Entero: ");
		(*(dato+i)).flotante = validaFlotante("Flotante: ");
	}
}

void imprimeDinamicoB(Ejemplo **dato){
	cout<<setw(15)<<"Ubicacion"<<setw(15)<<"Entero"<<setw(10)<<"Flotante"<<endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<tam[i]; j++){
			cout<<setw(15)<<"Fila ["<<i<<"]["<<j<<"]";
			cout<<setw(15)<<(*(dato+i)+j)->entero;
			cout<<setw(10)<<setprecision(2)<<fixed<<(*(dato+i)+j)->flotante<<endl;
		}
		cout<<endl;
	}
}

void recibeDinamicoB(Ejemplo **dato){
	for(int i=0; i<row; i++){
		column = validaEntero("No. Registros: ");
		*(dato+i) = (Ejemplo*)malloc(column*sizeof(Ejemplo));
		tam[i] = column;
		for(int j=0; j<column; j++){
			(*(dato+i)+j)->entero = validaEntero("Entero: ");
			(*(dato+i)+j)->flotante = validaFlotante("Flotante: ");
		}
		system("cls");
	}
}

void imprimeDocente(Registro **reg){
	cout<<"No.Empleado"<<setw(15)<<"Nombre"<<setw(15)<<"Apellidos"<<setw(15)<<"Fecha de Ingreso"
	<<setw(15)<<"Fecha de Ingreso"<<setw(15)<<"No.Clase"<<setw(15)<<"Salon"<<setw(15)<<"Horario"<<setw(15)<<"Asistencias"<<endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<tam[i]; j++){
			cout<<setw(10)<<(*(reg+i)+j)->docente.noEmpleado;
			cout<<setw(15)<<(*(reg+i)+j)->docente.nombre;
			cout<<setw(15)<<(*(reg+i)+j)->docente.apellidos;
			cout<<setw(15)<<(*(reg+i)+j)->docente.fechaIngreso;
			cout<<setw(15)<<(*(reg+i)+j)->clase.noClase;
			cout<<setw(15)<<(*(reg+i)+j)->clase.salon;
			cout<<setw(15)<<(*(reg+i)+j)->clase.horario;
			cout<<setw(15)<<(*(reg+i)+j)->asistencias;
		}
		cout<<endl;
	}
}

void registroDocente(Registro **reg){
	for(int i=0; i<row; i++){
		column = validaEntero("No. Registros: ");
		*(reg+i) = (Registro*) malloc (column *sizeof (Registro));
		tam[i] = column;
		for(int j=0; j<column; j++){
			(*(reg+i)+j)->docente.noEmpleado = validaNoEmpleado("No.Empleado: ");
			validaNombre("Nombre: ", (*(reg+i)+j)->docente.nombre, 20);
			validaCadena("Apellidos: ", (*(reg+i)+j)->docente.apellidos, 20);
			validaCadena("Fecha de Ingreso: ", (*(reg+i)+j)->docente.fechaIngreso, 20);
			(*(reg+i)+j)->clase.noClase = validaEntero("No.Clase: ");
			validaCadena("Salon: ", (*(reg+i)+j)->clase.salon, 20);
			validaCadena("Horario: ", (*(reg+i)+j)->clase.horario, 20);
			(*(reg+i)+j)->asistencias = validaEntero("Asistencias: ");
		}
		system("cls");
	}
}
