#include <stdio.h>
int main(){
	char nombre[10]=" ";
	int ai,bi,ci,di,ei;
	char a,b,c,d,e;
	char cadena[25]="Maria Castro Rosas 15";
	char mensaje[35];
	char ap_paterno[10];
	char ap_materno[10];
	int edad;
	float salario;
	
	sscanf("aeiou", "%c%c%c%c%c", &a,&b,&c,&d,&e);
	printf("\%c\t%c\t%c\t%c\t%c\n", a,b,c,d,e);
	
	sscanf("12 3 45 67 89", "%d%d%d%d%d", &ai, &bi, &ci, &di, &ei);
	printf("\n%d\t%d\t%d\t%d\t%d\n", ai,bi,ci,di);
	
	sscanf(cadena, "%s %s %s %d", nombre, ap_paterno, ap_materno, &edad);
	printf("\n%s\t%s\t%s\t%d\n", nombre, ap_paterno, ap_materno, edad);
	
	printf("\nIngresa nombre, apellidos y edad ");
	scanf("%s%s%s%d", nombre, ap_paterno, ap_materno, &edad);
	printf("\n%s\t%s\t%s\t%d\n", nombre, ap_paterno, ap_materno, edad);
	
	sscanf("Julian Castro Rosas 45 678.78", "%s%s%s%d%f", nombre, ap_paterno, ap_materno, &edad, &salario);
	printf("\n%s\t%s\t%s\t%d\t%.2f\n", nombre, ap_paterno, ap_materno, edad, salario);
	
	sprintf(mensaje, "\n%s\t%s\n%s\t%d\t%.2f\n", nombre, ap_paterno, ap_materno, edad, salario);
	puts(mensaje);
	return 0;
}
