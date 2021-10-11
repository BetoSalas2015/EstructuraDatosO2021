//  Sesión 25 - 11/10/2021
//  Repasdo general de Arreglos
#include <stdio.h>
#include <stdlib.h>


int main()
{
	int y;					// Declaro una variable entera llamada y
	
	// Declaro un arreglo de 10 enteros llamado arreglo
	int arreglo[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}; // Inicialización directa.
	int arreglo2[10];
	int matriz[3][3] = { {1,2,3}, {4, 5, 6}, {7, 8,9}};

	for(y = 0; y <= 10; y++)
		arreglo2[y] = 1;			//  Inicialización manual

	arreglo[8] = 24;

	system("pause");
	return 1;
}
