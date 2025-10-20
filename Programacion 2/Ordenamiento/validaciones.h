int validaMatricula(const char mensaje[]){
	matricula =  matricula + 1;

	printf("%s%d\n", mensaje, matricula);

    return matricula;
}

void validaCadena(const char *mensaje, char cadena[10], int tamano){
	bool bandera = true;

	while(bandera){
		printf("%s", mensaje);
		gets(cadena);
		fflush(stdin);
		if(strlen(cadena)>tamano){
			printf("M�ximo de %d caracteres\n", tamano);
			continue;
		}else{
			for(int i=0; i<strlen(cadena); i++){
				if(isalpha(cadena[i]) || cadena[i] == ' '){
					if(i == strlen(cadena)-1){
						bandera =  false;
					}
				}else break;
			}
		}
	}
}

int validaEntero(const char mensaje[]){
	int valida = 0, digito = 0;

	do{
		printf("%s", mensaje);
		valida = scanf("%d", &digito);
		fflush(stdin);
	}while(valida != 1 || digito <= 0 || digito > 50);

	return digito;
}

float validaFlotante(const char mensaje[]){
	int valida = 0;
    float digito = 0;

    do{
        printf("%s", mensaje);
        valida = scanf("%f", &digito);
    	fflush(stdin);
	}while(valida != 1 || digito <= 0 || digito > 10);

    return digito;
}
