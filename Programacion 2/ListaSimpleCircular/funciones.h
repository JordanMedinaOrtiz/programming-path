//----------Prototipo de la función actualizar----------
void actualizaLista(Empleado *, Empleado *, int);

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
	}
	
	return nuevo;
}

void agregar_elemento_inicio(Empleado *primero, Empleado *ultimo, int pos){
	Empleado *nuevo = registro();
	
	if(primero == NULL){
		nuevo->sig = nuevo;
		primero = nuevo;
		ultimo = nuevo;
	}else{
		nuevo->sig = primero;
		primero = nuevo;
		ultimo->sig = primero;
	}
	actualizaLista(primero, ultimo, pos);
}

void agregar_elemento_final(Empleado *primero, Empleado *ultimo, int pos){
	Empleado *nuevo = registro();
	
	if(primero == NULL){
		primero = nuevo;
		ultimo = nuevo;
	}else{
		ultimo->sig = nuevo;
		ultimo = nuevo;
		ultimo->sig = primero;
	}
	actualizaLista(primero, ultimo, pos);
}

void agregar_elemento_posicion(Empleado *primero, Empleado *ultimo, int pos) {
    Empleado *nuevo = registro();
    Empleado *aux = primero;
    int aux2 = 1, posicion = 0;
    
    cout<<"Introduce en que posicion agregar: ";
    cin>>posicion;
    
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

	cout<<"Elemento agregado en la posicion "<<posicion;
    nuevo->sig = aux->sig;
    aux->sig = nuevo;
    actualizaLista(primero, ultimo, pos);
}

void eliminar_primer_elemento(Empleado *primero, Empleado *ultimo, int pos){
	Empleado *temp = primero;
	
	if(primero != NULL){
		if(primero == ultimo){
			primero = NULL;
			ultimo = NULL;
		}else{
			primero = primero->sig;
			ultimo->sig = primero;
		}
		free(temp);
		cout<<"Elemento eliminado";
	}else cout<<"No hay elementos";
	actualizaLista(primero, ultimo, pos);
}

void eliminar_ultimo_elemento(Empleado *&primero, Empleado *&ultimo, int pos) {
    Empleado *actual = primero;
    Empleado *previo = NULL;
    
	if(primero == NULL){
        cout << "No hay elementos" << endl;
        return;
    }

    if(primero == ultimo){
        free(primero);
        primero = NULL;
        ultimo = NULL;
    } 

    while(actual->sig != primero){
        previo = actual;
        actual = actual->sig;
    }

    previo->sig = primero;
    ultimo = previo;
    free(actual);
    cout << "Ultimo elemento eliminado";
    actualizaLista(primero, ultimo, pos);
}


void eliminar_elemento_posicion(Empleado *primero, Empleado *ultimo, int pos){
	Empleado *temporal = primero;
	Empleado *anterior = NULL;
	
	int posicion = 0, i = 1;
	
	cout<<"Introduce la posicion del elemento a eliminar: ";
	cin>>posicion;
	
	while(temporal != NULL){
		
		if(i == posicion){	
			if(anterior == NULL){
				primero = temporal->sig;	
			}else anterior->sig = temporal->sig;
			
			free(temporal);
			cout<<"Elemento en la posicion "<<posicion<<" eliminado";
			actualizaLista(primero, ultimo, pos);	
			return;
		}
		
		anterior = temporal;
		temporal = temporal->sig;
		i++;
		if(temporal == primero) temporal = NULL;
	}
	
	cout<<"La posicion "<<posicion<<" no existe en la lista";
	actualizaLista(primero, ultimo, pos);
}


void eliminar_elemento_id(Empleado *primero, Empleado *ultimo, int pos){
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
			actualizaLista(primero, ultimo, pos);	
			return;
		}
		
		anterior = temporal;
		temporal = temporal->sig;
		//if(temporal == primero) temporal = NULL;
	}
	
	cout<<"El ID "<<id<<" no existe en la lista";
	actualizaLista(primero, ultimo, pos);
}

void eliminar_lista(Empleado *primero, Empleado *ultimo, int pos){
	Empleado *temp = primero;
	Empleado *aux;
	
	while(temp != NULL){
		aux = temp->sig;
		delete temp;
		temp = aux;	
		//if(temp == primero) temp = NULL;
	}
	
	primero = NULL;
	ultimo = NULL;
	cout<<"Elementos eliminados";
	actualizaLista(primero, ultimo, pos);
}

void mostrar_lista_id(Empleado *primero, Empleado *ultimo, int pos){
	struct Empleado *auxiliar = primero;
	
	int id = 0;
	
	if(primero == NULL){
		cout<<"No hay elementos en la lista"; 
		return;
	}
	
	cout<<"Introduce el ID para mostrar su informacion: ";
	cin>>id;
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
		if(auxiliar == primero) auxiliar = NULL;
	}
	cout<<endl<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"Ultimo NODO: "<<ultimo;
	actualizaLista(primero, ultimo, pos);
}

void mostrar_lista(Empleado *primero, Empleado *ultimo, int pos){
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
		if(aux == primero) aux = NULL;
	}
	cout<<endl<<endl<<"Primer NODO: "<<primero;
	cout<<endl<<"Ultimo NODO: "<<ultimo;
	actualizaLista(primero, ultimo, pos);
}

void ordenar_lista(Empleado *primero, Empleado *ultimo, int pos){
	Empleado *aux = primero;
	Empleado *actual, *min;
	Empleado *pivote1 = new Empleado;
	Empleado *pivote2 = new Empleado;
	
	if(primero == NULL || primero->sig == NULL){
		cout<<"La lista está vacía o tiene un elemento, no se puede ordenar la lista";
		return;
	}
	
	while(aux != NULL){
		min = aux;
		actual = aux->sig;
		while(actual != primero){
			//if(min->nombre, compare(actual->nombre) > 0){
			if(min->idEmpleado > actual->idEmpleado){
				min = actual;	
			}
			actual = actual->sig;
		}
		pivote1->idEmpleado = aux->idEmpleado;
		pivote1->nombre = aux->nombre;
		pivote1->puesto = aux->puesto;
		pivote1->salario = aux->salario;
		
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
		if(aux == primero) aux = NULL;
	}
	
	cout<<"Elementos de la lista ordenados";
	actualizaLista(primero, ultimo, pos);
}

void agregar_elemento_ordenado(Empleado *primero, Empleado *ultimo, int pos){
	Empleado *nuevo = registro();
	
	if(primero == NULL){
		nuevo->sig = nuevo;
		primero = nuevo;
		ultimo = nuevo;
	}else{
		nuevo->sig = primero;
		ultimo->sig = nuevo;
		ultimo = nuevo;
	}
	actualizaLista(primero, ultimo, pos);
	
	ordenar_lista(primero, ultimo, pos);
}

void modificar_lista_id(Empleado *primero, Empleado *ultimo, int pos){
	Empleado *aux = primero;
	
	if(primero == NULL){
		cout<<"No hay elementos en la lista";
		return;
	}
	
	int id = 0;
	
	cout<<"Introduce el ID para editar su informacion: ";
	cin>>id;
	
	while(aux != NULL){
		if(aux->idEmpleado == id){
			aux->idEmpleado = validaEntero("idEmpleado: ");
			cout<<"Nombre: ";
			getline(cin, aux->nombre);
			cout<<"Puesto: ";
			getline(cin, aux->puesto);
			aux->salario = validaFlotante("Salario: ");
			cout<<"Informacion con el id "<<id<<" actualizada";
			return;
		}
		aux = aux->sig;
		if(aux == primero) aux = NULL;
	}
	
	cout<<"El ID "<<id<<" no existe en la lista";
	actualizaLista(primero, ultimo, pos);
}

//----------Listas----------

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

void mostrarListas(Empleado *primero, Empleado *ultimo, int pos){
	struct Listas *aux = primeraLista;
	int i = 1;
	cout<<"Lista"<<setw(10);
	cout<<"Ubicacion"<<setw(30);
	cout<<"Lista (Primer nodo)"<<setw(30);
	cout<<"Lista (Ultimo nodo)"<<setw(20);
	cout<<"Siguiente"<<endl;
	
	while(aux != NULL){
		cout<<i<<setw(10);
		//Para solo teclear el número de lista
		cout<<aux<<setw(30);
		//Ubicacion asiganada a cada lista
		cout<<aux->primero<<setw(30);
		cout<<aux->ultimo<<setw(20);
		cout<<aux->sig<<endl;
		aux = aux->sig;
		i++;
	}
	cout<<endl<<"Primera Lista: "<<primeraLista;
	cout<<endl<<"Ultima Lista: "<<ultimaLista;
	aux = primeraLista;
	
	while(aux != NULL){
		mostrar_lista(aux->primero, aux->ultimo, pos);
		aux = aux->sig;
	}
}
