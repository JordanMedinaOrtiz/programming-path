#include "librerias.h"

/*referenciación -> obtención de la direccion dee una variable & 
des-referenciación -> obtención del valor almacenado en el espacio 
de memoria donde apunta un apuntado*/

int main(){
	setlocale(LC_CTYPE,"spanish");
	int var1 = 6;
	int *pin = &var1;
	printf("\nEl valor almacenado en var1 es: %d\n", var1);
	printf("\nLa dirección de &var1 es: %d\n", &var1);
	printf("\nEl valor almacenado en pin es: %d\n", pin);
	printf("\nEl valor almacenado en la direccion que guarda *pin es: %d\n", *pin);
	printf("\nLa dirreción de &pin es: %d\n", &pin);
}

/*int main(){
	int u = 1, v = 3;
	int *pu = &u;
	int *pv = &v;
	
	printf("1) U=%d\tV=%d\n", u,v);
	printf("3) U=%d\tV=%d\n", u,v);
	printf("5) U=%d\tV=%d\n", u,v);
	printf("6) U=%d\tV=%d\n", u,v);
	printf("8) U=%d\tV=%d\n", u,v);
}*/
