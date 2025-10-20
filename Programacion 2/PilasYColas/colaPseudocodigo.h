//Alogoritomo Cola FIFO
//Primero en entrar, primero en salir
void imprimeFIFO(){
	cout<<endl<<endl;
	for(int i = tope-1; i >= 0; i--){
		cout<<i<<"-->"<<vec[i]<<endl;
	}
}

void enqueue(){ //Agrega un nuevo nodo al final
	if(tope < T){
		vec[tope] = validaEntero("Valor: ");
		tope++;
	}else{
		cout<<"Cola Llena";
	}
	imprimeFIFO();
}

void dequeue(){ //Elimina un nodo al inicio de la cola
	int i=0;
	if(tope > 0){
		while(i < T-1){
			vec[i] = vec[i+1];
			i++;
		}
		tope--;
	}else{
		cout<<"Cola vacía";
	}
	vec[T-1] = 0;
	imprimeFIFO();
}
