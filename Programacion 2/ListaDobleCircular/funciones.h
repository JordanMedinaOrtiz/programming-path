Empleado *registro(){
	Empleado *nuevo = new Empleado;
	
	if(nuevo == NULL){
		cout<<"No hay memoria disponible"<<endl;
	}else{
		nuevo->idEmpleado = validaEntero("idEmpleado: ");
		cout<<"Nombre: ";
		getline(cin, nuevo->nombre);
		cout<<"Puesto: ";
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
        nuevo->sig = nuevo;
        nuevo->ant = nuevo;
        primero = nuevo;
        ultimo = nuevo;
    }else{
        nuevo->sig = primero;
        primero->ant = nuevo;
        primero = nuevo;
        ultimo->sig = primero;
        primero->ant = ultimo;
    }
}

void agregar_elemento_final(){
	Empleado *nuevo = registro();
	
	if(primero == NULL){
        nuevo->sig = nuevo;
        nuevo->ant = nuevo;
        primero = nuevo;
        ultimo = nuevo;
    }else{
        nuevo->ant = ultimo;
        ultimo->sig = nuevo;
        ultimo = nuevo;
        nuevo->sig = primero;
        primero->ant = ultimo;
    }
}

void eliminar_primer_elemento(){
    Empleado *temp = primero;
    
    if(primero != NULL){
        primero = primero->sig;
        primero->ant = ultimo;
        ultimo->sig = primero;
        free(temp);
        cout << "Elemento eliminado";
    }else{
        cout << "No hay elementos";
    }
}

void eliminar_ultimo_elemento(){
    Empleado *temp = ultimo;
    
	if(ultimo != NULL){
        ultimo = ultimo->ant;
        ultimo->sig = primero;
        primero->ant = ultimo;
        free(temp);
        cout << "Ultimo elemento eliminado";
    }else{
        cout << "No hay elementos";
    }
}

void mostrar_lista_siguiente(){
	struct Empleado *auxiliar = primero;
	
	if(auxiliar == NULL){
		cout<<"No hay elementos en la lista"; 
		return;
	}
	
	cout<<"Mostrando la lista completa"<<endl;
	cout<<"Ubicacion"<<setw(15); 
	cout<<"idEmpleado"<<setw(10);
	cout<<"Nombre"<<setw(15);
	cout<<"Puesto"<<setw(15);
	cout<<"Salario"<<setw(15);
	cout<<"Siguiente"<<setw(15);
	cout<<"Anterior"<<endl;
	while(auxiliar != NULL){
		cout<<auxiliar<<setw(10);
		cout<<auxiliar->idEmpleado<<setw(15);
		cout<<auxiliar->nombre<<setw(15);
		cout<<auxiliar->puesto<<setw(15);
		cout<<auxiliar->salario<<setw(15);
		cout<<auxiliar->sig<<setw(15);
		cout<<auxiliar->ant<<endl;
		auxiliar = auxiliar->sig;
		if(auxiliar == primero) auxiliar = NULL;
	}
	cout<<endl<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"Ultimo NODO: "<<ultimo;
}

void mostrar_lista_anterior(){
	struct Empleado *auxiliar = ultimo;
	
	if(auxiliar == NULL){
		cout<<"No hay elementos en la lista"; 
		return;
	}
	
	cout<<"Mostrando la lista completa"<<endl;
	cout<<"Ubicacion"<<setw(15); 
	cout<<"idEmpleado"<<setw(10);
	cout<<"Nombre"<<setw(15);
	cout<<"Puesto"<<setw(15);
	cout<<"Salario"<<setw(15);
	cout<<"Siguiente"<<setw(15);
	cout<<"Anterior"<<endl;
	while(auxiliar != NULL){
		cout<<auxiliar<<setw(10);
		cout<<auxiliar->idEmpleado<<setw(15);
		cout<<auxiliar->nombre<<setw(15);
		cout<<auxiliar->puesto<<setw(15);
		cout<<auxiliar->salario<<setw(15);
		cout<<auxiliar->sig<<setw(15);
		cout<<auxiliar->ant<<endl;
		auxiliar = auxiliar->ant;
		if(auxiliar == ultimo) auxiliar = NULL;
	}
	cout<<endl<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"Ultimo NODO: "<<ultimo;
}
