#include <stdio.h>
#include <ctype.h>

int main(){
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10-i; j++){
			printf(" ");
		}
		for(int j=0; j<2*i-1; j++){
			printf("%c", toascii(3));
		}
		printf("\n");
	}
	return 0;
}
