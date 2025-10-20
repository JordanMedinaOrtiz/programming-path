//Jordan Medina Ortiz - 179913
#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	char nombres[4][20] = {" "};
	char aux[20] = " ";
	int vocales = 0;
	bool bandera = true;
	
	for(int i=0; i<4; i++){
		do{
			bandera = true;
			printf("Dame el nombre %d: ", (i+1));
			fgets(aux, 20, stdin);
			fflush(stdin);
			for(int j=0; j<4; j++){
				if(strcmp(aux, nombres[j])==0){ //si el aux se compara con nombre en [j] y si da 0 bandera la pone en falsa
					bandera = false;
					break;
				}
			}
		}while(!bandera);
		strcpy(nombres[i], aux); //asigna al el valor nombres[i]el valor de au
	}
	
	for(int i=0; i<4; i++){
		vocales = 0;
		for(int j=0; j<strlen(nombres[i]); j++){
			if(nombres[i][j] == 'a' || nombres[i][j] == 'e' || nombres[i][j] == 'i' || nombres[i][j] == 'o' || nombres[i][j] == 'u'){
				vocales++;
			}
		}
		printf("Nombre[%d] = %s tiene %d vocales\n", (i+1), nombres[i], vocales);
	}
	
	for(int i=0; i<4; i++){
		printf("Nombre [%d] = \t",(i+1));
		for(int j=0; j<strlen(nombres[i]); j++){
			printf("%c\t", nombres[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
