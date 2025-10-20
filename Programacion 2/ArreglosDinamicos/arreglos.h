void imprime(int n, int *x){
	for(int i=0; i<n; i++){
		cout<<setw(10)<<*(x+i);
		//cout<<setw(10)<<x[i];
	}
	cout<<endl;
}

void inicializa1(int n, int *x){
	for(int i=0; i<n; i++){
		*(x+i) = rand()%100+1;
		//x[i] = rand()%100+1;
	}
}

void inicializa2(int n, int *x){
	for(int i=0; i<n; i++){
		(*(x+i))++;
		//x[i]++;
	}
}

void inicializa_arreglo(int ** enteros, int f, int c){
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			*(*(enteros+i)+j) = rand()%100+1;
			//enteros[i][j] = rand()%100+1;
		}
	}
}

void imprime_arreglo(int **enteros, int f, int c){
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			cout<<setw(10)<<*(*(enteros+i)+j);
			//cout<<setw(10)<<enteros[i][j];
		}
		cout<<endl;
	}
}

void inicializa_arregloV2(int ** enteros, int f, int c[]){
	for(int i=0; i<f; i++){
		for(int j=0; j<c[i]; j++){
			*(*(enteros+i)+j) = rand()%100+1;
			//enteros[i][j] = rand()%100+1;
		}
	}
}

void imprime_arregloV2(int **enteros, int f, int c[]){
	for(int i=0; i<f; i++){
		for(int j=0; j<c[i]; j++){
			cout<<setw(10)<<*(*(enteros+i)+j);
			//cout<<setw(10)<<enteros[i][j];
		}
		cout<<endl;
	}
}
