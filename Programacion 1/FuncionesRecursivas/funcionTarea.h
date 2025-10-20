//función que recibe un número n, imprime los números del n al 1
void imprimeN(int i){
	if(i==0) return;
	else printf("%d\n",i);
	imprimeN(--i);
}

//funcion que recibe un número n par, lo divide en 2 para imprimir el resultado mientras siga par
void imprimeP(int i){
	printf("%d\n", i);
	if(i%2 !=0) return;
	else imprimeP(i/2);
}
