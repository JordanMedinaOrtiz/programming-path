#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
	float saldo=0, gastar=0;
	int sigue=1;
	char nombre[30]= " ";
	int valida=0;
	printf("Nombre: ");
	scanf("%s", nombre);
	
	do{
		printf("\nSaldo: ");
		valida = scanf("%f", &saldo);
		fflush(stdin);
	}while(saldo <=0 || valida !=1);
	
	do{
		system("cls");
		printf("\n\nLista@ para gastar...%s\n", nombre);
		printf("Tu saldo es %.2f", saldo);
		
		do{
			printf("\nGastar: ");
			valida = scanf("%f", gastar);
			fflush(stdin);
		}while(gastar <=0 || valida !=1);
		
		if(gastar > saldo) printf("Saldo insuficiente \n");
		else{
			saldo=gastar;
			printf("Saldo %.2f", saldo);
		}
		
		if(saldo > 0){
			do{
				printf("\n\n¿Deseas seguir comprando?.. 1 Para SI... otro para NO -->");
				valida = scanf("d", &sigue);
				fflush(stdin);
			}while(valida != 1);
		}else sigue=0;
	}while(sigue ==1 && saldo >0);
	
	if(saldo == 0) printf("\n\nNO tienes saldo para gastar :(");
	
	printf("\n\nTu saldo final es de %.2f", saldo);
	getch();
	return 0;
}
