//  Sesión 20 - 29/09/2021
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int factorialIt(int n)				// Version iterativa de factorial
{
	int  i,fact = 1;
	for(i = 1; i <= n; i++)
		fact = fact * i;	
	return fact;
}
//   Modelo matemático de factorial
//   n! = 1						Si n = 1   (cms)
//   n! = n * (n-1)!			Si n > 1    (aprox)
int factorial(int n)
{
	if(n == 1)				// criterio de paro (cms)
		return 1;
	else	
		return n * factorial(n - 1);	// llamada recursiva (aprox)
}

//   (a * b) = a				Si b = 1
//   (a * b) = (a * b-1) + a	Si b > 1
int multiplicacion(int a, int b)
{
	if(b == 1)
		return a;
	else				///o también  if(b > 1)
		return multiplicacion(a, b -1) + a;
}

//	x^y = 1				Si y = 0
//  x^y = x * x^y-1		Si y > 0
int potencia(int x, int y)
{
	if(y == 0)
		return 1;
	else
		return x * potencia(x, y - 1);
}

//  Fi = 1					Si i = 1 o i = 2
//  Fi = Fi-1 + Fi-2		Si i > 2
int fibonacci(int i)
{
	if((i == 1) || (i == 2))
		return 1;
	else
		return fibonacci(i - 1) + fibonacci(i - 2);
}

//  Pi = 4					Si i = 1
//  Pi = Pi-1 - 4/(2i-1)	Si i > 1 y es par
//  Pi = Pi-1 + 4/(2i-1)	Si i > 1 y es impar
float pi(int i)
{
	if(i == 1)
		return 4.0;
	if((i > 1) && (i % 2 == 0))			//  i % 2 == 0  significa que es par
		return pi(i - 1) - 4.0/(2 * i - 1);
	if((i > 1) && (i % 2 != 0))			//  i % 2 != 0  significa que es impar
		return pi(i - 1) + 4.0/(2 * i - 1);
}



int main()
{
	int n;
	printf("Dame el número del que quieres el factorial: ");
	scanf("%d", &n);
	
	printf("El factorial iterativo de %d es: %d\n", n, factorialIt(n) );
	printf("El factorial recursivo de %d es: %d\n", n, factorial(n) );

	printf("Multiplicar 5 * 25 es igual a: %d \n", multiplicacion(5, 25) );

	printf("Elevar 5 al 3 es igual a: %d \n", potencia(5, 3) );

	printf("Fibonacci de 6 es igual a: %d \n", fibonacci(6) );

	printf("Pi a 19 terminos es igual a: %f \n", pi(19) );
	printf("Pi a 141 terminos es igual a: %f \n", pi(141) );
	printf("Pi a 1501 terminos es igual a: %f \n", pi(1501) );
	printf("Pi a 1501 terminos es igual a: %f \n", pi(9000) );

	system("pause");
	return 1;
}
