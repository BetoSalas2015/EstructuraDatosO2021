//  Sesión 29 - 19/10/2021
//  Base.c

#include <stdio.h>		//  Para la I/O o E/S
#include <stdlib.h>		//  PAra system(), srand() y rand()
#include <time.h>		//  Para las función de tiempo: time()

// #define macro valor
#define SIZE 15
#define RANGO 1000

void imprimeArreglo(int arr[], int n)
{
	int i;
	for(i = 0; i < SIZE; ++i)
		printf("%d, ", arr[i]);
	putchar('\n');
}

//  Implemente su algoritmo de ordenamiento aquí

int main()
{
	int arreglo[SIZE];				// Creo un archivo de datos de tamaño SIZE
	int i;							// Variaqble controladora para los ciclos
	
	srand( time(0) );					// Proveemos la semilla de numeros aleatorios

	for(i = 0; i < SIZE; ++i)
		arreglo[i] = rand() % RANGO;

	printf("Arreglo desordenado: \n");
	imprimeArreglo(arreglo, SIZE);

	//  Invoque su función de Ordenamiento aquí

	printf("Arreglo ordenado: \n");
	imprimeArreglo(arreglo, SIZE);

	system("pause");
	return 1;
}
