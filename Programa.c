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


//	x^y = 1				Si y = 0
//  x^y = x * x^y-1		Si y > 0

//  Fi = 1					Si i = 1 o i i = 2
//  Fi = Fi-1 + Fi-2		Si i > 2

//  Pi = 4					Si i = 1
//  Pi = Pi-1 - 4/(2i-1)	Si i > 1 y es par
//  Pi = Pi-1 + 4/(2i-1)	Si i > 1 y es impar


int main()
{
	int n;
	printf("Dame el número del que quieres el factorial: ");
	scanf("%d", &n);
	
	printf("El factorial iterativo de %d es: %d\n", n, factorialIt(n) );
	printf("El factorial recursivo de %d es: %d\n", n, factorial(n) );

	system("pause");
	return 1;
}
