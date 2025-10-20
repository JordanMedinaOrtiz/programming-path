void imprime(int numeros[]){
	for(int i=0; i<10; i++){
		printf("%d\t",numeros[i]);
	}
}

void inicializa(int numeros[], int &num){
	num++;
	printf("\nDentro de inicializa %d\n", num);
	for(int i=0; i<10; i++){
		numeros[i] = num;
	}
}

void inicializaUni(int numeros[]){
	for(int i=0; i<10; i++){
		numeros[i] = validaEnteros("Valor: ");
	}
}

//Calificaciones Bi Arreglos
void inicializaCalf(char alumno[5][20], float calf[5][3], float promedio[5], float &promGeneral, float &menor, float &mayor){
	for(int i=0; i<5; i++){
		printf("Alumno %i: ", i+1);
		fgets(alumno[i], 20, stdin);
		fflush(stdin);
		for(int j=0; j<3; j++){
			printf("Calificación %d: ", j+1);
			calf[i][j] = validaCalf("Ingresa la calificación: ");
			promedio[i] += calf[i][j];
		}
		promedio[i] /= 3;
		if(i==0){
			menor = promedio[i];
			mayor = promedio[i];
		}else{
			if(promedio[i] < menor) menor = promedio[i];
			if(promedio[i] > mayor) mayor = promedio[i];
		}
		promGeneral += promedio[i];
		printf("\n");
	}
	promGeneral /= 5;
}

void imprimirCalf(char alumno[5][20], float calf[5][3], float promedio[5], float &promGeneral, float &menor, float &mayor){
	float prom = 0;
	
	printf("\nAlumno\tCalf.1\tCalf.2\tCalf.3\tPromedio\n\n");
	for(int i=0; i<5; i++){
		printf("%s\t", alumno[i]);
		for(int j=0; j<3; j++){
			printf("%.2f\t", calf[i][j]);
		}		
		printf("%.2f\n", promedio[i]);
	}
	
	printf("\n\nProm:\t");
	for(int j=0; j<3; j++){
		prom = 0;
		for(int i=0; i<5; i++){
			prom += calf[i][j];
		}
		printf("%.2f\t", prom/5);
	}
	
	printf("%.2f\n", promGeneral);
	
	printf("\nPromedio mayor: ");
	for(int i=0; i<5; i++){
		if(mayor == promedio[i]) printf("%s\t\t", alumno[i]);
	}
	
	printf("\nPromedio menor: ");
	for(int i=0; i<5; i++){
		if(menor == promedio[i]) printf("%s\t\t", alumno[i]);
	}
}

//Evaluacion
void inicializaEva(int arreglo1[4][3], int arreglo2[4][3]){
	printf("\n\n");
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("Valor para [%d][%d]: ", i, j);
			arreglo1[i][j] = validaEva("\nIngresa el valor: ");
			arreglo2[i][j] = arreglo1[i][j] + 1;
		}
	}
}

void mediaEva(int arreglo1[4][3], int arreglo2[4][3], int arreglo3[4][3], int opc){
	for(int i=0; i<4; i++){
		printf("\nOPC FILA %d\n1.-SUMA\n2.-RESTA\n3.-MULTIPLICACIÓN\n4.-DIVISION: ", i+1);
		opc = validaOpc("Ingresa opción: ");
		for(int j=0; j<3; j++){
			if(opc == 1) arreglo3[i][j] = arreglo1[i][j] + arreglo2[i][j];
			if(opc == 2) arreglo3[i][j] = arreglo1[i][j] - arreglo2[i][j];
			if(opc == 3) arreglo3[i][j] = arreglo1[i][j] * arreglo2[i][j];
			if(opc == 4) arreglo3[i][j] = arreglo1[i][j] / arreglo2[i][j];
		}
	}
	printf("\n\n");
}

void imprimirEva(int arreglo1[4][3], int arreglo2[4][3], int arreglo3[4][3]){
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("%d\t", arreglo1[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("%d\t", arreglo2[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	for(int i=0; i<4; i++){
		for(int j=0; j<3; j++){
			printf("%d\t", arreglo3[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
}
