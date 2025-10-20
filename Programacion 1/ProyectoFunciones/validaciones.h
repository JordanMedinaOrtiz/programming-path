int validaEnteros(const char mensaje[]){
	int valida = 0;
	int entero = 0;
	
	do{
		printf("\n%s", mensaje);
		valida = scanf("%d", &entero);
		fflush(stdin);
	}while(valida != 1);
	
	return entero;
}

//Calificacion Bi Arreglos
float validaCalf(const char mensaje[]){
	int valida = 0;
	float calf = 0;
	
	do{
		printf("\n%s", mensaje);
		valida = scanf("%f", &calf);
		fflush(stdin);
	}while(valida != 1 || !(calf>=0 && calf<=10));
	
	return calf;
}

//Bi Evaluacion
int validaEva(const char mensaje[]){
	int valida = 0;
	int eva = 0;
	
	do{
		printf("%s", mensaje);
		valida = scanf("%d", &eva);
		fflush(stdin);
	}while(eva % 2 !=0 || valida !=1);
	
	return eva;
}

int validaOpc(const char mensaje[]){
	int valida = 0;
	int opc = 0;
	
	do{
		printf("\n%s", mensaje);
		valida = scanf("%d", &opc);
		fflush(stdin);
	}while(!(opc >= 1 && opc<=4) || valida !=1);
	
	return opc;
}
