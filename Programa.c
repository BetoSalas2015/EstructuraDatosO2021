//  Sesión 15 - 15/09/2021

#include <stdio.h>			// para la entrada y salida
#include <stdlib.h>			// para el system()

int global;				// Variable global (externa)

int elevaCuadrado(int numero)	// encabezado  - argumento formal
{								// cuerpo de la función	
	global = 3;
	return (numero * numero);
}

//  Declaración de la funcion main()
int main( )					// encabezado
{							// cuerpo de la función	
	int calculo;			//  Variables automáticas (locales)
	static int numero;		//  Variable estática (local)

	global = 10;

	printf("Dame el numero del que quieres el cuadrado: "); //  invocación -  argumento actua
	scanf("%d", &numero);					//  invocación -  argumento actua

	calculo = elevaCuadrado(numero);		//  invocación -  argumento actual

	printf("El cuadrado de %d es %d\n", numero, calculo); //  invocación -  argumento actua
	

	system("pause");				//  invocación -  argumento actua
	return 0;
}