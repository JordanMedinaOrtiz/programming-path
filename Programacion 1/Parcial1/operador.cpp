#include <stdio.h>

int main(){
	int a=5, b=12, c=11, d=9, e=7, f=2;
	
	a = --d + 15 * 20;
	d -= c + --e /15;
	c = 5* --f + -a;
	b = b*9 + --f %2;
	e *= --d + 9;
	
	if(--a + d < 9 || f++ + d++ > 5 && c-- -d%f < 15 || 9*3 %e/2 <=2){
		printf("True");
	}else{
		printf("False");
	}
	return 0;
}
