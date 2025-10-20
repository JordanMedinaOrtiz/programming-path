int validaNoEmpleado(const char *mensaje){
	int numero;
	
	numero=rand() % 11;
	
	return numero;
}

void validaNombre(const char *mensaje, char cadena[], int tamano){
    bool bandera = true;
    bool cont = false;

    while(bandera){
		printf("%s", mensaje);
		gets(cadena);
		fflush(stdin);
		if(strlen(cadena) > tamano){
			printf("Máximo de %d caracteres\n", tamano);
			continue;
		}else{
			for(int j=0; j<strlen(cadena); j++){
				if(cadena[j] == 'e' || cadena[j] == 'e') cont = true;
			}
			for(int i=0; i<strlen(cadena); i++){
				if(isalpha(cadena[i]) || cadena[i] == ' ' || cont ){
					if(i == strlen(cadena)-1){
						bandera = false;
					}
				}else break;
			}
		}
	}
}

/* Validaciones generales */

int validaEntero(const char *mensaje){
	int valida = 0;
	int digito = 0;
	
	do{
		printf("%s", mensaje);
		valida = scanf("%d", &digito);
		fflush(stdin);
	}while(valida !=1 || digito <= 0);
	
	return digito;
}

int validaFlotante(const char *mensaje){
	int valida = 0;
	float digito = 0;
	
	do{
		printf("%s", mensaje);
		valida = scanf("%f", &digito);
		fflush(stdin);
	}while(valida !=1 || digito <= 0);
	
	return digito;
}

void validaCadena(const char *mensaje, char cadena[], int tamano) {
    bool bandera = true;

    while(bandera){
		printf("%s", mensaje);
		gets(cadena);
		fflush(stdin);
		if(strlen(cadena) > tamano){
			printf("Máximo de %d caracteres\n", tamano);
			continue;
		}else{
			for(int i=0; i<strlen(cadena); i++){
				if(isalpha(cadena[i]) || cadena[i] == ' '){
					if(i == strlen(cadena)-1){
						bandera = false;
					}
				}else break;
			}
		}
	}
}
