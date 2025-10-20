#include <stdio.h>
#include <ctype.h> //isalpha, tolower, toupper
#include <string.h> //strlen

int main(){
	char cadena[10]="";
	bool bandera = true;
	
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
}
