Empleado *registro(){
	Empleado *nuevo = new Empleado;
	
	if(nuevo == NULL){
		cout<<"No hay memoria disponible"<<endl;
	}else{
		nuevo->idEmpleado = validaEntero("idEmpleado: ");
		cout<<"Nombre: ";
		//cin>>nuevo->nombre; = cin es un scanf
		getline(cin, nuevo->nombre);
		cout<<"Puesto: ";
		//cin>>nuevo->puesto
		getline(cin, nuevo->puesto);
		nuevo->salario = validaFlotante("Salario: ");
		nuevo->sig = NULL;
	}
	
	return nuevo;
}

void agregar_elemento_inicio(Empleado *primero, Empleado *ultimo, int pos){
	Empleado *nuevo = registro();
	
	if(primero == NULL){
		primero = nuevo;
		ultimo = nuevo;
	}else{
		nuevo->sig = primero;
		primero = nuevo;
	}
	actualizaLista(orimero, ultimo, pos);
}

void agregar_elemento_final(Empleado *primero, Empleado *ultimo, int pos){
	Empleado *nuevo = registro();
	
	if(primero == NULL){
		primero = nuevo;
		ultimo = nuevo;
	}else{
		ultimo->sig = nuevo;
		ultimo = nuevo;
	}
}

void agregar_elemento_medio() {
    Empleado *nuevo = registro();
    Empleado *aux = primero;
    int aux2 = 1, posicion = 0;
    
    cout<<"Introduce en que posicion agregar: ";
    scanf("%d", &posicion);
    
    while(aux != NULL && aux2 < posicion - 1){
        aux = aux->sig;
        aux2++;
    }

    if(aux == NULL){
        cout<<"No existe la posicion especificada, se agregara al final."<<endl;
        ultimo->sig = nuevo;
		ultimo = nuevo;
        return;
    }

    nuevo->sig = aux->sig;
    aux->sig = nuevo;
}

void eliminar_primer_elemento(){
	Empleado *temp = primero;
	
	if(primero != NULL){
		primero = primero->sig;
		free(temp);
		cout<<"Elemento eliminado";
	}else cout<<"No hay elementos";
}

void eliminar_ultimo_elemento(){
	Empleado *actual = primero;
	Empleado *previo = NULL;
	
	if(primero == NULL) cout<<"No hay elementos"; return;
	
	while(actual != ultimo){
		previo = actual;
		actual = actual->sig;
	}
	previo->sig = NULL;
	free(actual);
	ultimo = previo;
	cout<<"Ultimo elemento eliminado";
}

void eliminar_elemento_posicion(){
	Empleado *temporal = primero;
	Empleado *anterior = NULL;
	
	int posicion = 0, i = 1;
	
	cout<<"Introduce la posicion del elemento a eliminar: ";
	scanf("%d", &posicion);
	
	while(temporal != NULL){
		
		if(i == posicion){	
			if(anterior == NULL){
				primero = temporal->sig;	
			}else anterior->sig = temporal->sig;
			
			free(temporal);
			cout<<"Elemento en la posicion "<<posicion<<" eliminado";	
			return;
		}
		
		anterior = temporal;
		temporal = temporal->sig;
		i++;
	}
	
	cout<<"La posicion "<<posicion<<" no existe en la lista";
}


void eliminar_elemento_id(){
	Empleado *temporal = primero;
	Empleado *anterior = NULL;
	
	int id = 0;
	
	cout<<"Introduce el ID del elemento a eliminar: ";
	scanf("%d", &id);
	
	while(temporal != NULL){
		
		if(id == temporal->idEmpleado){	
			if(anterior == NULL){
				ultimo = temporal->sig;
			}else anterior->sig = temporal->sig;
			
			free(temporal);
			cout<<"Elemento en con el id "<<id<<" eliminado";	
			return;
		}
		
		anterior = temporal;
		temporal = temporal->sig;
	}
	
	cout<<"El id "<<id<<" no existe en la lista";
}

void eliminar_lista(){
	Empleado *temp = primero;
	Empleado *aux;
	
	while(temp != NULL){
		aux = temp->sig;
		delete temp;
		temp = aux;	
	}
	
	primero = NULL;
	ultimo = NULL;
	cout<<"Elementos eliminados";
}

void mostrar_lista_id(){
	struct Empleado *auxiliar = primero;
	
	int id = 0;
	
	if(auxiliar == NULL){
		cout<<"No hay elementos en la lista"; 
		return;
	}
	
	cout<<"Introduce el ID para mostrar su informacion: ";
	scanf("%d", &id);
	system("cls");
	
	cout<<"Mostrando informacion con el id: "<<id<<endl;
	cout<<"Ubicacion"<<setw(15); 
	cout<<"idEmpleado"<<setw(10);
	cout<<"Nombre"<<setw(15);
	cout<<"Puesto"<<setw(15);
	cout<<"Salario"<<setw(15);
	cout<<"Siguiente"<<endl;
	while(auxiliar != NULL){
		if(auxiliar->idEmpleado == id){
			cout<<auxiliar<<setw(10);
			cout<<auxiliar->idEmpleado<<setw(15);
			cout<<auxiliar->nombre<<setw(15);
			cout<<auxiliar->puesto<<setw(15);
			cout<<auxiliar->salario<<setw(15);
			cout<<auxiliar->sig<<endl;	
		}
		auxiliar = auxiliar->sig;
	}
	cout<<endl<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"Ultimo NODO: "<<ultimo;
}

void mostrar_lista(){
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
	cout<<"Siguiente"<<endl;
	while(auxiliar != NULL){
		cout<<auxiliar<<setw(10);
		cout<<auxiliar->idEmpleado<<setw(15);
		cout<<auxiliar->nombre<<setw(15);
		cout<<auxiliar->puesto<<setw(15);
		cout<<auxiliar->salario<<setw(15);
		cout<<auxiliar->sig<<endl;
		auxiliar = auxiliar->sig;
	}
	cout<<endl<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"Ultimo NODO: "<<ultimo;
}

void ordenar_lista(){
	Empleado *aux = primero;
	Empleado *actual, *min;
	Empleado *pivote1 = new Empleado;
	Empleado *pivote2 = new Empleado;
	
	while(aux != NULL){
		min = aux;
		actual = aux->sig;
		while(actual != NULL){
			//if(min->nombre, compare(actual->nombre) > 0){
			if(min->idEmpleado > actual->idEmpleado){
				min = actual;	
			}
			actual = actual->sig;
		}
		pivote1->idEmpleado = aux->idEmpleado;
		pivote1->nombre = aux->nombre;
		pivote1->puesto = aux->puesto;
		pivote1->puesto = aux->salario;
		
		pivote2->idEmpleado = min->idEmpleado;
		pivote2->nombre = min->nombre;
		pivote2->puesto = min->puesto;
		pivote2->salario = min->salario;
		
		min->idEmpleado = pivote1->idEmpleado;
		min->nombre = pivote1->nombre;
		min->puesto = pivote1->puesto;
		min->salario = pivote1->salario;
		
		aux->idEmpleado = pivote2->idEmpleado;
		aux->nombre = pivote2->nombre;
		aux->puesto = pivote2->puesto;
		aux->salario = pivote2->salario;
		
		aux = aux->sig;
	}
	
	cout<<"Elementos de la lista ordenados";
}

void agregar_elemento_ordenado(){
	agregar_elemento_final();
	ordenar_lista();
}

void modificar_lista_id(){
	Empleado *aux = primero;
	
	if(aux == NULL){
		cout<<"No hay elementos en la lista";
		return;
	}
	
	int id = 0;
	
	cout<<"Introduce el ID para editar su informacion: ";
	scanf("%d", &id);
	
	while(aux != NULL){
		if(aux->idEmpleado == id){
			aux->idEmpleado = validaEntero("idEmpleado: ");
			cout<<"Nombre: ";
			getline(cin, aux->nombre);
			cout<<"Puesto: ";
			getline(cin, aux->puesto);
			aux->salario = validaFlotante("Salario: ");
		}
		aux = aux->sig;
	}
	
	cout<<"Informacion con el id "<<id<<" actualizada";
}

void actualizaLista(Empleado *primero, Empleado *ultimo, int pos){
	Listas *aux = primeraLista;
	int i = 1;
	while(aux != NULL){
		if(i == pos){
			aux->primero = primero;
			aux->ultimo = ultimo;
		}
		aux = aux->sig;
		i++;
	}
}

void agregarInicioLista(){
	Empleado *nuevo = registro();
	if(primero == NULL){
		primero = nuevo;
		ultimo = nuevo;
	}else{
		nuevo->sig = primero;
		primero = nuevo;
	}
}

void agregarLista(){
	Listas *nuevo = new Listas;
	primero = NULL;
	ultimo = NULL;
	agregarInicioLista();
	if(primeraLista == NULL){
		primeraLista = nuevo;
		ultimaLista = nuevo;
	}else{
		ultimaLista->sig = nuevo;
		ultimaLista = nuevo;
	}
	nuevo->sig = NULL;
	nuevo->primero = primero;
	nuevo->ultimo = ultimo;
}

void mostrarListas(){
	system("cls");
	struct Listas *aux = primeraLista;
	int i = 1;
	cout<<"Lista"<setw(5);
	cout<<"Ubicacion Lista"<<setw(20);
	cout<<"Lista (Primer nodo)"<<setw(20);
	cout<<"Siguiente"<<endl;
	
	while(aux != NULL){
		cout<<i<<"\t"<<setw(5);
		//
		cout<<aux<<setw(20);
		//Ubicacion asiganada a cada lista
		cout<<aux->primero<<setw(20);
	}
}
