#include <stdio.h>
#include <ctype.h> //toascii
#include <string.h> //strlen

int main(){
	char cadena[]="Jordan";
	
	printf("\n\n");
	for(int i=0; i<strlen(cadena); i++){
		printf("%d - ", toascii(cadena[i]));
	}
	
	printf("\n\n");
	for(int i=0; i<10; i++){
		printf("\tFILA%c\t", toascii(3));
		for(int j=0; j<10; j++){
			printf("%c", toascii(4));
		}
		printf("\n");
	}
	
	printf("\n\n");
	printf("\t\a%c - %c - %c - %c - %c - %c \n\n ", toascii(74), toascii(111), toascii(114), toascii(100), toascii(97), toascii(110) );
	
}
