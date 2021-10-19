//  Sesión 28 - 18/10/2021
//  Base.c

#include <stdio.h>		//  Para la I/O o E/S
#include <stdlib.h>		//  PAra system(), srand() y rand()
#include <time.h>		//  Para las función de tiempo: time()

// #define macro valor
#define SIZE 100
#define RANGO 1000

int main()
{
	int arreglo[SIZE];				// Creo un archivo de datos de tamaño SIZE
	int i;							// Variaqble controladora para los ciclos
	
	srand( time(0) );					// Proveemos la semilla de numeros aleatorios

	for(i = 0; i < SIZE; ++i)
		arreglo[i] = rand() % RANGO;

	for(i = 0; i < SIZE; ++i)
		printf("%d, ", arreglo[i]);
	putchar('\n');

	system("pause");
	return 1;
}
