//  Sesi�n 15 - 15/09/2021

#include <stdio.h>			// para la entrada y salida
#include <stdlib.h>			// para el system()

int global;				// Variable global (externa)

int elevaCuadrado(int numero)	// encabezado  - argumento formal
{								// cuerpo de la funci�n	
	global = 3;
	return (numero * numero);
}

//  Declaraci�n de la funcion main()
int main( )					// encabezado
{							// cuerpo de la funci�n	
	int calculo;			//  Variables autom�ticas (locales)
	static int numero;		//  Variable est�tica (local)

	global = 10;

	printf("Dame el numero del que quieres el cuadrado: "); //  invocaci�n -  argumento actua
	scanf("%d", &numero);					//  invocaci�n -  argumento actua

	calculo = elevaCuadrado(numero);		//  invocaci�n -  argumento actual

	printf("El cuadrado de %d es %d\n", numero, calculo); //  invocaci�n -  argumento actua
	

	system("pause");				//  invocaci�n -  argumento actua
	return 0;
}