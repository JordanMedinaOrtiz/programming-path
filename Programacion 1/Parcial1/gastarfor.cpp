#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE,"spanish");
	float saldo=0, gastar=0, final=0;
	int valida=0;

	for(int i=0; i<5; i++){
		printf("Cliente: %d\n", i+1);
		
		do{
			printf("Introduce tu saldo: ");
			valida = scanf("%f", &saldo);	
			fflush(stdin);
		}while(valida !=1 || !(saldo>0));
		
		for(int j=0; j<8; j++){
			
			do{
				printf("¿Cuanto deseas gastar? ");
				scanf("%f", &gastar);	
				fflush(stdin);
			}while(valida !=1 || !(gastar>0));
			
			if(gastar>saldo && saldo<=0){
				printf("Saldo insuficiente :(\n\n");
				break;
			}else{
				final = saldo - gastar;
				printf("Saldo restante: %.2f\n", final);
			}
			saldo = final;
			
		}	
	}
	return 0;
}
