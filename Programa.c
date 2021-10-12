//  Sesión 26 - 12/10/2021
//  Cadenas

#include <stdio.h>		//  Para la I/O o E/S
#include <stdlib.h>		//  PAra funciones de utilería
#include <string.h>		//  Para el manejo de cadenas

int main()
{
	int i;					// Declaro una variable entera llamada i
	char cadena[80];
	char cadena2[80];
	printf("Dame una cadena: ");
	gets(cadena);
	i = 0;					//  Nos posicionamos en el indice 0 de la cadena
	while(cadena[i] != '\0')
	{
		cadena2[i] = cadena[i];
		i++;				//   Avanzo al siguiente caracter en la cadena
	}
	cadena2[i] = '\0';
	printf("La copia de la cadena es %s\n", cadena2);
	system("pause");
	return 1;
}
