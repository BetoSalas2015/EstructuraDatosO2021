//  Sesión 17 - 22/09/2021
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "Estructura.h"

//   Funciones
float pitagoras(int cateto1, int cateto2)
{
	return sqrt( (int)square(cateto1) + square(cateto2) );
}

int main()
{
	datos();
	system("pause");
	return 1;
}

void datos(void)
{
	int c1, c2;
	float h;
	printf("Dame el cateto adyacente: ");
	scanf("%d", &c1);
	printf("Dame el cateto opuesto: ");
	scanf("%d", &c2);
	h = pitagoras(c1, c2);
	printf("La hipotenusa del triangulo es %f: \n", h);
}

int square(int numero)
{
	return (numero * numero);
}