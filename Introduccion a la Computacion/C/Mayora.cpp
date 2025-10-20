#include<stdio.h>
#include<conio.h>
/*Programa que define un arreglo unidimensional con datos enteros
recorre el arreglo y encuentra el elemento mayor 
  Guillermo García Haro 02/12/2020 */
   main(){
   int i,max;
 int arreglo[10]={10,70,50,60,20,45,18,95,81,33}; //define un arreglo de 10 n�meros enteros
 max==arreglo[0]; //asigna a max el primer elemento del arreglo
   for(i=1;i<10;i++)
    if (arreglo[i] > max) max=arreglo[i]; //recorre el arreglo si el elemento es mayor a max asigna ese valor como max
 printf("El elemento mayor es: %d \n",max); //despliega el elemento mayor
   getch();
   }