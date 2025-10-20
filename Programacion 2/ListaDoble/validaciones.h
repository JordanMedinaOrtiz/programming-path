int validaEntero(const char mensaje[]){
	int valida = 0, entero = 0;
	
	do{
		printf("%s", mensaje);
		valida = scanf("%d", &entero);
		fflush(stdin);
	}while(valida != 1 || entero <= 0);
	
	return entero;
}

int validaFlotante(const char mensaje[]){
	int valida = 0;
	float entero = 0;
	
	do{
		printf("%s", mensaje);
		valida = scanf("%f", &entero);
		fflush(stdin);
	}while(valida != 1 || entero <= 0);
	
	return entero;
}
