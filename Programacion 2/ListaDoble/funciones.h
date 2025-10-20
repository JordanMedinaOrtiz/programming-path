//----------Nodos----------
Empleado *registro(){
	Empleado *nuevo = new Empleado;
	
	if(nuevo == NULL){
		cout<<"No hay memoria disponible"<<endl;
	}else{
		nuevo->idEmpleado = validaEntero("ID Empleado: ");
		cout<<"Nombre: ";
		//cin>>nuevo->nombre; = cin es un scanf
		getline(cin, nuevo->nombre);
		cout<<"Puesto: ";
		//cin>>nuevo->puesto
		getline(cin, nuevo->puesto);
		nuevo->salario = validaFlotante("Salario: ");
		nuevo->sig = NULL;
		nuevo->ant = NULL;
	}
	
	return nuevo;
}

void agregar_elemento_inicio(){
	Empleado *nuevo = registro();
	
	if(primero == NULL){
		primero = nuevo;
		ultimo = nuevo;
	}else{
		nuevo->sig = primero;
		primero->ant = nuevo;
		primero = nuevo;
	}
}

void agregar_elemento_final(){
	Empleado *nuevo = registro();
	
	if(primero == NULL){
		primero = nuevo;
		ultimo = nuevo;
	}else{
		nuevo->ant = ultimo;
		ultimo->sig = nuevo;
		ultimo = nuevo;
	}
}

void eliminar_primer_elemento(){
	Empleado *temp = primero;
	
	if(primero != NULL){
		primero = primero->sig;
		primero->ant = NULL;
		free(temp);
		cout<<"Elemento eliminado";
	}else cout<<"No hay elementos";
}

void eliminar_ultimo_elemento() {
    Empleado *temp = ultimo;
    
	if(primero == NULL){
        cout << "No hay elementos" << endl;
        return;
    }else{
    	ultimo = ultimo->ant;
    	ultimo->sig = NULL;
    	free(temp);	
    	cout << "Ultimo elemento eliminado";
	}
}

void mostrar_lista_siguiente(){
	struct Empleado *aux = primero;
	
	if(aux == NULL){
		cout<<"No hay elementos en la lista"; 
		return;
	}
	
	cout<<endl<<endl<<"Mostrando la lista completa"<<endl;
	cout<<"Ubicacion"<<setw(15); 
	cout<<"idEmpleado"<<setw(10);
	cout<<"Nombre"<<setw(15);
	cout<<"Puesto"<<setw(15);
	cout<<"Salario"<<setw(15);
	cout<<"Siguiente"<<endl;
	while(aux != NULL){
		cout<<aux<<setw(10);
		cout<<aux->idEmpleado<<setw(15);
		cout<<aux->nombre<<setw(15);
		cout<<aux->puesto<<setw(15);
		cout<<aux->salario<<setw(15);
		cout<<aux->sig<<endl;
		aux = aux->sig;
	}
	cout<<endl<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"Ultimo NODO: "<<ultimo;
}

void mostrar_lista_anterior(){
	struct Empleado *aux = ultimo;
	
	if(aux == NULL){
		cout<<"No hay elementos en la lista"; 
		return;
	}
	
	cout<<endl<<endl<<"Mostrando la lista completa"<<endl;
	cout<<"Ubicacion"<<setw(15); 
	cout<<"idEmpleado"<<setw(10);
	cout<<"Nombre"<<setw(15);
	cout<<"Puesto"<<setw(15);
	cout<<"Salario"<<setw(15);
	cout<<"Siguiente"<<setw(15);
	cout<<"Anterior"<<endl;
	while(aux != NULL){
		cout<<aux<<setw(10);
		cout<<aux->idEmpleado<<setw(15);
		cout<<aux->nombre<<setw(15);
		cout<<aux->puesto<<setw(15);
		cout<<aux->salario<<setw(15);
		cout<<aux->sig<<setw(15);
		cout<<aux->ant<<endl;
		aux = aux->ant;
	}
	cout<<endl<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"Ultimo NODO: "<<ultimo;
}
