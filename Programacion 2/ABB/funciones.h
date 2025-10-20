ABB crearNodo(int x){
	ABB nuevo = new Nodo;
	nuevo->idNodo = x;
	//Aqui se debe de pedir la informacion del nodo
	nuevo->izq = NULL;
	nuevo->der = NULL;
	return nuevo;
}

void insertar(ABB &arbol, int x){
	if(arbol == NULL){
		arbol = crearNodo(x);
	}else if(x < arbol->idNodo){
		insertar(arbol->izq, x);
	}else if(x > arbol->idNodo){
		insertar(arbol->der, x);
	}
}

void preOrden(ABB arbol){
	if(arbol != NULL){
		cout<<arbol->idNodo<<"\t";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}

void inOrden(ABB arbol){
	if(arbol != NULL){
		inOrden(arbol->izq);
		cout<<arbol->idNodo<<"\t";
		inOrden(arbol->der);
	}
}

void posOrden(ABB arbol){
	if(arbol != NULL){
		posOrden(arbol->izq);
		posOrden(arbol->der);
		cout<<arbol->idNodo<<"\t";
	}
}

void buscar(ABB arbol, int nodo){
	if(arbol != NULL){
		if(nodo == arbol->idNodo){
			cout<<arbol->idNodo;
		}
		buscar(arbol->izq, nodo);
		buscar(arbol->der, nodo);
	}
}

void eliminarDerecha(ABB &arbol, int x){	
	pNodo padre = NULL;
	pNodo actual = arbol;
	pNodo nodo;
	int aux;
	
	while(actual != NULL){
		if(x == actual->idNodo){
			if(actual->der == NULL && actual->izq == NULL){
				if(padre != NULL){
					if(padre->der == actual){
						padre->der = NULL;
					}else{
						if(padre->izq == actual){
							padre->izq = NULL;
						}
					}
				}
				free(actual);
				actual = NULL;
			}else{
				padre = actual;
				if(actual->der != NULL){
					nodo = actual->der;
					while(nodo->izq != NULL){
						padre = nodo;
						nodo = nodo->izq;
					}
				}else{
					nodo = actual->izq;
					while(nodo->der != NULL){
						padre = nodo;
						nodo = nodo->der;
					}
				}
				aux = actual->idNodo;
				actual->idNodo = nodo->idNodo;
				nodo->idNodo = aux;
				actual = nodo;
			}
		}else{
			padre = actual;
			if(x > actual->idNodo){
				actual = actual->der;
			}else{
				if(x < actual->idNodo){
					actual = actual->izq;
				}
			}
		}	
	}
}

void eliminarIzquierda(ABB &arbol, int x){	
	pNodo padre = NULL;
	pNodo actual = arbol;
	pNodo nodo;
	int aux;
	
	while(actual != NULL){
		if(x == actual->idNodo){
			if(actual->der == NULL && actual->izq == NULL){
				if(padre != NULL){
					if(padre->der == actual){
						padre->der = NULL;
					}else{
						if(padre->izq == actual){
							padre->izq = NULL;
						}
					}
				}
				free(actual);
				actual = NULL;
			}else{
				padre = actual;
				if(actual->izq != NULL){
					nodo = actual->izq;
					while(nodo->der != NULL){
						padre = nodo;
						nodo = nodo->der;
					}
				}else{
					nodo = actual->der;
					while(nodo->izq != NULL){
						padre = nodo;
						nodo = nodo->izq;
					}
				}
				aux = actual->idNodo;
				actual->idNodo = nodo->idNodo;
				nodo->idNodo = aux;
				actual = nodo;
			}
		}else{
			padre = actual;
			if(x > actual->idNodo){
				actual = actual->der;
			}else{
				if(x < actual->idNodo){
					actual = actual->izq;
				}
			}
		}	
	}
}
