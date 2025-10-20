float validaSaldo(const char mensaje[]){
	float valida = 0;
	float saldo = 0;
	
	do{
		printf("%s", mensaje);
		valida = scanf("%f", &saldo);
		fflush(stdin);
	}while(valida != 1 || saldo<=0);
	
	return saldo;
}

int validaOpcion(const char mensaje[]){
	int valida = 0;
	int opc = 0;
	
	do{
		printf("%s", mensaje);
		valida = scanf("%d", &opc);
		fflush(stdin);
	}while(valida != 1 || opc <= 0 || opc > 2);
	
	return opc;
}

float validaCompra(const char mensaje[]){
	int valida = 0;
	float gasto = 0;
	
	do{
		printf("%s", mensaje);
		valida = scanf("%f", &gasto);
		fflush(stdin);
	}while(valida != 1 || gasto <= 0);
	
	return gasto;
}

char validaLetras(const char mensaje[], char *pnombre){
	int valida = 0;
	bool bandera = true;
	
	while(bandera){
		printf("%s", mensaje);
		gets(pnombre);
		if(isdigit(*pnombre)){
			bandera = true;
		}else bandera = false;
	}
	
	return *pnombre;
}

float validaPromedio(const char mensaje[]){
	int valida = 0;
	float promedio = 0;
	
	do{
		printf("%s", mensaje);
		valida = scanf("%f", &promedio);
		fflush(stdin);
	}while(valida != 1 || promedio < 0 || promedio > 10);
	
	return promedio;
}

char validaCadena(const char mensaje[]){
	bool bandera = true;
	char cadena[5];
	char cadenas[5];
	int n = 0;
	int c = 0;
	int v = 0;
	
	while(bandera){
		printf("%s", mensaje);
		cadenas[1] = scanf("%s", cadena);
		for(int i=0; i<strlen(cadena); i++){
			if(cadena[i] == 'a' || cadena[i] == 'e'|| cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u'){
				v++;
			}
			if(!(cadena[i] == 1)){
				n++;
			}
			if(cadena[i] == '*'){
				c++;
			}
		}
		if(v >= 1 && n >= 1 && c >= 1) bandera = false;
	}
	
	return cadenas[1];
}
