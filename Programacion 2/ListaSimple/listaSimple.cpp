#include "librerias.h"

int main(){
//	SetConsoleCP(1252);
//	SetConsoleOutputCP(1252);
	
	/*primero = NULL;
	ultimo = NULL;*/
	
	primeraLista = NULL;
	ultimaLista = NULL;
	
	while(sigue == 1){
		agregarLista();
		sigue = validaEntero("Teclea 1 para agregar otra lista: ");
	}
	
	menu();
	
	return 0;
}
