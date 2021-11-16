//  Sesión 39 - 16/11/2021
//  Programa.c

#include <stdio.h>		//  Para la I/O o E/S
#include <stdlib.h>		//  PAra system(), srand() y rand()

struct datos
{
	char nombre[30];
	int edad;
	char sexo;
	char direccion[30];
};

int main()
{
	//int costo = 60;			//  Creo una variable entera llamada costo y guardo el valor de 60
	//int *pointer;			//  Creo una variable apuntador a direccciones de m. donde se guardan enteros
	//char *pointer2;
	//struct datos cadena[2];

	////  determinar el tamaño de bytes de las cosas en C
	//printf("El tipo de dato char ocupa %d bytes de memoria.\n", sizeof( char ) );
	//printf("El tipo de dato int ocupa %d bytes de memoria.\n", sizeof( int ) );
	//printf("El tipo de dato float ocupa %d bytes de memoria.\n", sizeof( float ) );
	//printf("El tipo de dato double ocupa %d bytes de memoria.\n", sizeof( double ) );
	//printf("El apuntador pointer ocupa %d bytes de memoria.\n", sizeof( pointer ) );
	//printf("El apuntador pointer2 ocupa %d bytes de memoria.\n", sizeof( pointer2 ) );
	//printf("La estructura datos ocupa %d bytes de memoria.\n", sizeof( struct datos ) );

	////  Direcciones de Memoria
	//printf("La dirección de memoria de la variable costo es: %p\n", &costo);		// %p imprime direcciones de memoria
	//printf("La dirección de memoria de la variable pointer es: %p\n", &pointer);
	//printf("La dirección de memoria de la variable pointer2 es: %p\n", &pointer2);
	//printf("La dirección de memoria de la variable cadena[0] es: %p\n", &cadena[0]);
	//printf("La dirección de memoria de la variable cadena[1] es: %p\n", &cadena[1]);

	////  Asignando direcciones de memoria
	//pointer = &costo;		// Creo un alias: la variable costo "alias" pointer,
	//						// ahora pointer "apunta" a costo. 
	//printf("La dirección de memoria guardada en la variable pointer es: %p\n", pointer);
	//printf("El contenido de la variable costo es: %d\n", costo);	// impresión directa
	//printf("El \"contenido de\" la variable pointer es: %d\n", *pointer);	// impresión indirecta

	//*pointer = 50;

	//printf("El contenido de la variable costo es: %d\n", costo);	// impresión directa
	//printf("El \"contenido de\" la variable pointer es: %d\n", *pointer);	// impresión indirecta
	
	//  Versión con variables

	//int a, b, c;

	//printf("Dame el primer número: ");
	//scanf("%d", &a);		//  dentro de pa está guardado &a
	//printf("Dame el segundo número: ");
	//scanf("%d", &b);

	//c = a + b;

	//printf("El resultado de la suma de %d + %d es igual a %d\n", a, b, c);

	// Versión con apuntadores

	int a, b, c;
	int *pa, *pb, *pc;	// declaramos los apuntadores  

	pa = &a;			//  Asignamos los "apodos" - Guardamos las direcciones de memoria
	pb = &b;
	pc = &c;

	printf("Dame el primer número: ");
	scanf("%d", pa);		//  dentro de pa está guardado &a
	printf("Dame el segundo número: ");
	scanf("%d", pb);

	*pc = *pa + *pb;

	printf("El resultado de la suma de %d + %d es igual a %d\n", *pa, *pb, *pc);


	system("pause");
	return 1;
}

