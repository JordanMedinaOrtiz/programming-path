void pedirSaldo(float *psaldo){
	*psaldo = validaSaldo("Bienvenido Usuario.\nIntroduce tu saldo: ");
}

void comprar(float *pgasto, float *psaldo){
	int opc = 0;
	
	opc = validaOpcion("\n¿Deseas comprar?\n1.Si\n2.No: ");
	
	while(opc == 1){
		*pgasto = validaCompra("\nIntroduce tu gasto: ");
		if(*pgasto <= *psaldo){
			*psaldo = *psaldo - *pgasto;
			printf("Saldo actual: %.2f", *psaldo);
			opc = validaOpcion("\n¿Deseas comprar?\n1.Si\n2.No: ");
		}else{
			printf("No tienes el saldo suficiente.\n");
			opc = 2;
		}
	}
}
