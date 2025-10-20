int suma(int *valor1, int *valor2, int *valor3){
	
    int sum = *valor1 + *valor2 + *valor3;
    
    return sum;
}

int multiplicacion(int *pV1, int *pV2, int *pV3){
	
    int multi = *pV1 * *pV2 * *pV3;
    *pV1 = 20;
    *pV2 = 30;
    *pV3 = 40;
    
    return multi;
}

int resta(int &valor1, int &valor2, int &valor3){
	valor1++;
	valor2++;
	valor3--;

    int rest = valor1 - valor2 - valor3;
    
    return rest;
}
