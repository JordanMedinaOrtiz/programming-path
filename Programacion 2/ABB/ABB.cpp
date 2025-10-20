#include "librerias.h"

int main(){
	ABB arbol = NULL;
	
	int n = 0;
	int x = 0;
	
	cout<<"Nodos del Arbol: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Nodo "<<i+1<<": ";
		cin>>x;
		insertar(arbol, x);
	}

	cout<<endl<<endl<<"Algoritmos de Recorrido PreOrden: "<<endl;
	preOrden(arbol);
	cout<<endl<<endl<<"Algoritmo de Recorrido InOrden: "<<endl;
	inOrden(arbol);
	cout<<endl<<endl<<"Algoritmo de Recorrido PosOrden: "<<endl;
	posOrden(arbol);
//	cout<<endl<<endl<<"Algoritmo de Eliminar por la derecha: ";
//	eliminarDerecha(arbol, 53);
//	cout<<endl<<"Algoritmos de Recorrido PreOrden: "<<endl;
//	preOrden(arbol);
	cout<<endl<<endl<<"Algoritmo de Eliminar por la izquierda: ";
	eliminarIzquierda(arbol, 91);
	cout<<endl<<"Algoritmos de Recorrido PreOrden: "<<endl;
	preOrden(arbol);
	
	return 0;
}
