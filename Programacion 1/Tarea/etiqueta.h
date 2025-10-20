void pedirCadena(char cadena[][20]){
	char cadenas[];
	for(int i=0; i<5; i++){
		cadenas[i] = validaCadena("Introduce cadena: ");
		printf("Cadena: %s\n", cadenas[i]);
	}
}
