Empleado *registro(){
	Empleado *nuevo = new Empleado;
	Registro *reg = new Registro;
	
	if(nuevo == NULL){
		cout<<"No hay memoria disponible"<<endl;
	}else{
		nuevo->idEmpleado = validaEntero("ID Empleado: ");
		
		reg->RFC = validaEntero("RFC: ");
		cout<<"Nombre: ";
		getline(cin, reg->nombre);
		cout<<"Direccion: ";
		getline(cin, reg->direccion);
		cout<<"Telefono: ";
		getline(cin, reg->tel);
		cout<<"Correo: ";
		getline(cin, reg->correo);
		reg->edad = validaEntero("Edad: ");
		
		cout<<"Puesto: ";
		getline(cin, nuevo->puesto);
		nuevo->salario = validaFlotante("Salario: ");
		
		nuevo->reg = reg;
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
	struct Empleado *aux = primero;
	
	if(aux == NULL){
		cout<<"No hay elementos en la lista"; 
		return;
	}
	
	cout<<"Mostrando la lista completa"<<endl;
	cout<<"Ubicacion"<<setw(15); 
	cout<<"ID"<<setw(10);
	
	cout<<"RFC"<<setw(10);
	cout<<"Nombre"<<setw(10);
	cout<<"Direccion"<<setw(10);
	cout<<"Telefono"<<setw(10);
	cout<<"Correo"<<setw(10);
	cout<<"Edad"<<setw(10);
	
	cout<<"Puesto"<<setw(10);
	cout<<"Salario"<<setw(10);
	cout<<"Siguiente"<<setw(15);
	cout<<"Anterior"<<endl;

	while(aux != NULL){
		cout<<aux<<setw(15);
		cout<<aux->idEmpleado<<setw(10);
		cout<<aux->reg->RFC<<setw(10);
		cout<<aux->reg->nombre<<setw(10);
		cout<<aux->reg->direccion<<setw(10);
		cout<<aux->reg->tel<<setw(10);
		cout<<aux->reg->correo<<setw(10);
		cout<<aux->reg->edad<<setw(10);
		cout<<aux->puesto<<setw(10);
		cout<<aux->salario<<setw(10);
		cout<<aux->sig<<setw(15);
		cout<<aux->ant<<endl;
		aux = aux->sig;
		if(aux == primero) aux = NULL;
	}
	
	cout<<endl;
	aux = primero;

	cout<<aux->sig->sig->sig->sig->sig->sig->sig<<setw(15);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->idEmpleado<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->reg->RFC<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->reg->nombre<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->reg->direccion<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->reg->tel<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->reg->correo<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->reg->edad<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->puesto<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->salario<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->sig<<setw(15);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->ant<<endl<<endl;

	cout<<aux->sig->sig->sig->sig->ant<<setw(15);
	cout<<aux->sig->sig->sig->sig->ant->idEmpleado<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->reg->RFC<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->reg->nombre<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->reg->direccion<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->reg->tel<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->reg->correo<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->reg->edad<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->puesto<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->salario<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->sig<<setw(15);
	cout<<aux->sig->sig->sig->sig->ant->ant<<endl;

		
	cout<<endl<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"Ultimo NODO: "<<ultimo;
}

void mostrar_lista_anterior(){
	struct Empleado *aux = ultimo;
	
	if(aux == NULL){
		cout<<"No hay elementos en la lista"; 
		return;
	}
	
	cout<<"Mostrando la lista completa"<<endl;
	cout<<"Ubicacion"<<setw(15); 
	cout<<"ID"<<setw(10);
	
	cout<<"RFC"<<setw(10);
	cout<<"Nombre"<<setw(10);
	cout<<"Direccion"<<setw(10);
	cout<<"Telefono"<<setw(10);
	cout<<"Correo"<<setw(10);
	cout<<"Edad"<<setw(10);
	
	cout<<"Puesto"<<setw(10);
	cout<<"Salario"<<setw(10);
	cout<<"Siguiente"<<setw(15);
	cout<<"Anterior"<<endl;
	
	while(aux != NULL){
		cout<<aux<<setw(15);
		cout<<aux->idEmpleado<<setw(10);
		cout<<aux->reg->RFC<<setw(10);
		cout<<aux->reg->nombre<<setw(10);
		cout<<aux->reg->direccion<<setw(10);
		cout<<aux->reg->tel<<setw(10);
		cout<<aux->reg->correo<<setw(10);
		cout<<aux->reg->edad<<setw(10);
		cout<<aux->puesto<<setw(10);
		cout<<aux->salario<<setw(10);
		cout<<aux->sig<<setw(15);
		cout<<aux->ant<<endl<<endl;
		aux = aux->ant;
		if(aux == ultimo) aux = NULL;
	}

	cout<<endl;
	aux = ultimo;

	cout<<aux->sig->sig->sig->sig->sig->sig->sig<<setw(15);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->idEmpleado<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->reg->RFC<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->reg->nombre<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->reg->direccion<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->reg->tel<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->reg->correo<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->reg->edad<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->puesto<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->salario<<setw(10);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->sig<<setw(15);
	cout<<aux->sig->sig->sig->sig->sig->sig->sig->ant<<endl<<endl;

	cout<<aux->sig->sig->sig->sig->ant<<setw(15);
	cout<<aux->sig->sig->sig->sig->ant->idEmpleado<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->reg->RFC<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->reg->nombre<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->reg->direccion<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->reg->tel<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->reg->correo<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->reg->edad<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->puesto<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->salario<<setw(10);
	cout<<aux->sig->sig->sig->sig->ant->sig<<setw(15);
	cout<<aux->sig->sig->sig->sig->ant->ant<<endl;
	
	cout<<endl<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"Ultimo NODO: "<<ultimo;
}
