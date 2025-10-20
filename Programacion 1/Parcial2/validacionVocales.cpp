#include <stdio.h>
#include <ctype.h> //isalpha, tolower, toupper
#include <string.h> //strlen

int main(){
	char cadena[10]="";
	bool bandera = true;
	int v=0;
	
	while(bandera){
		printf("Cadena: ");
		//scanf("%[^\n]", cadena);
		gets(cadena);
		fflush(stdin);
		if(strlen(cadena)>9) continue;
		else{
			for(int i = 0; i < strlen(cadena); i++){
				if(isalpha(cadena[i]) || cadena [i] == ' '){
					if(i == (strlen(cadena)-1)){ //strlen (tamaño de la cadena)
						for (int j=0; j<strlen(cadena); j++){
							cadena[j] = tolower(cadena[j]); //toupper
								if(cadena[j] == 'a' || cadena[j] == 'e' || cadena[j] == 'i' || cadena[j] == 'o' || cadena[j] == 'u'){
								v++;
								}
						}
						printf("La cadena es: %s \n", cadena);
						strcpy(strupr(cadena), cadena); //strlwr
						printf("La cadena es: %s \n", cadena);
						bandera = false;
					}
				}else break;
			}
		}
	}
	printf("Numero de vocales: %d", v);
	return 0;
}
