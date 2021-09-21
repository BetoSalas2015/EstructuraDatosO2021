//  Sesión 16 - 21/09/2021
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int square(int numero)
{
	return (numero * numero);
}

float pitagoras(int cateto1, int cateto2)
{
	return sqrt( (int)square(cateto1) + square(cateto2) );
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

int main()
{
	datos();
	system("pause");
	return 1;
}