void imprime_LIFO_FIFO(){
	cout<<endl<<endl;
	cout<<setw(20)<<"Matricula:"<<setw(20)<<"Nombre"
		<<setw(10)<<"Carrera"<<setw(10)<<"Materia"
		<<setw(10)<<"Calif.1"<<setw(10)<<"Calif.2"
		<<setw(10)<<"Calif.3"<<setw(10)<<"semestre"<<endl<<endl;
	for(int i = tope; i >= 0; i--){
		cout<<setw(20)<<reg[i].dat.matricula
			<<setw(25)<<reg[i].dat.nombre
			<<setw(10)<<reg[i].dat.carrera
			<<setw(10)<<reg[i].materia;
		for(int j = 0; j < 3; j++){
			cout<<setw(10)<<fixed<<setprecision(2)<<reg[i].calif[j];
		}
		cout<<setw(10)<<reg[i].semestre<<endl;
	}	
}

void push_Enqueue(){ //Agregar nuevo nodo en la parte superior
	if(tope < T){
		reg[tope].dat.matricula = validaMatricula("Matricula: ");
		validaCadena("Nombre: ", reg[tope].dat.nombre, 20);
		validaCadena("Carrera: ", reg[tope].dat.carrera, 5);
		validaCadena("Materia: ", reg[tope].materia, 20);
		for(int j=0; j<3; j++){
			reg[tope].calif[j] = validaFlotante("Calf: ");
		}
		reg[tope].semestre = validaEntero("Semestre: ");
		tope++;
	}else{
		cout<<"Cola Llena";
	}
	imprime_LIFO_FIFO();
}

void popEst(){ //Quita un nodo en la parte superior de la pila
	if(tope > 0){
		tope--;
	}else{
		cout<<"Pila vacía";
	}
	imprime_LIFO_FIFO();
}

void dequeueEst(){ //Quita un nodo en la parte superior de la cola
	int i=0;
	if(tope > 0){
		while(i < T-1){
			reg[i] = reg[i+1];
			i++;
		}
		tope--;
	}else{
		cout<<"Cola vacía";
	}
	imprime_LIFO_FIFO();
}
