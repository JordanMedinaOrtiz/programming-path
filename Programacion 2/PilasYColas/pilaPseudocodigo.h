//Alogoritmo Pila LIFA
//Último en entrar, primero en salir
void imprimeLIFO(){
	cout<<endl<<endl;
	for(int i = tope-1; i >= 0; i--){
		cout<<i<<"-->"<<vec[i]<<endl;
	}
}

void push(){ //Agrega nuevo nodo en la parte superior de la pila
	if(tope < T){
		vec[tope] = validaEntero("Valor: ");
		tope++;
	}else{
		cout<<"Pila Llena";
	}
	imprimeLIFO();
}

void pop(){ //Quita un nodo en la parte superior de la pila
	if(tope > 0){
		vec[tope] = 0;
		tope--;
	}else{
		cout<<"Pila vacía";
	}
	imprimeLIFO();
}
