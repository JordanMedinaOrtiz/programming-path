#include "librerias.h"

int main(){
	setlocale(LC_CTYPE,"spanish");
//	crear_arch();

	cargarArch();
	int sigue = 1;
	int opcion = 0;
	
//	while(sigue == 1){
//		system("cls");
//		cout<<"1: push --Agrega nodo a la pila"<< endl;
//		cout<<"2: pop --Quita nodo a la pila"<< endl;
//		cout<<"3: enqueue --Agrega nodo a la cola"<< endl;
//		cout<<"4: dequeue --Quita nodo a la cola"<< endl;
//		opcion = validaEntero("Opción: ");
//		switch(opcion){
//			case 1: push(); break;
//			case 2: pop(); break;
//			case 3: enqueue(); break;
//			case 4: dequeue(); break;
//			default: cout<<"No existe la opción"<<endl;
//		}
//		sigue = validaEntero("1 para continuar / otro para salir ");
//	}
	
	while(sigue == 1){
		system("cls");
		cout<<"1: push --Agrega nodo a la pila"<< endl;
		cout<<"2: pop --Quita nodo a la pila"<< endl;
		cout<<"3: enqueue --Agrega nodo a la cola"<< endl;
		cout<<"4: dequeue --Quita nodo a la cola"<< endl;
		opcion = validaEntero("Opción: ");
		switch(opcion){
			case 1: push_Enqueue(); break;
			case 2: popEst(); break;
			case 3: push_Enqueue(); break;
			case 4: dequeueEst(); break;
			default: cout<<"No existe la opción"<<endl;
		}
		sigue = validaEntero("1 para continuar / otro para salir ");
	}
	actualizarArchivo();
//	crear_arch();
	return 0;
	
}
