//  Sesi�n 42 - 23/11/2021
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

void direccionesMemoria()
{
	int costo = 60;			//  Creo una variable entera llamada costo y guardo el valor de 60
	int *pointer;			//  Creo una variable apuntador a direccciones de m. donde se guardan enteros
	char *pointer2;
	struct datos cadena[2];

	//  determinar el tama�o de bytes de las cosas en C
	printf("El tipo de dato char ocupa %d bytes de memoria.\n", sizeof( char ) );
	printf("El tipo de dato int ocupa %d bytes de memoria.\n", sizeof( int ) );
	printf("El tipo de dato float ocupa %d bytes de memoria.\n", sizeof( float ) );
	printf("El tipo de dato double ocupa %d bytes de memoria.\n", sizeof( double ) );
	printf("El apuntador pointer ocupa %d bytes de memoria.\n", sizeof( pointer ) );
	printf("El apuntador pointer2 ocupa %d bytes de memoria.\n", sizeof( pointer2 ) );
	printf("La estructura datos ocupa %d bytes de memoria.\n", sizeof( struct datos ) );

	//  Direcciones de Memoria
	printf("La direcci�n de memoria de la variable costo es: %p\n", &costo);		// %p imprime direcciones de memoria
	printf("La direcci�n de memoria de la variable pointer es: %p\n", &pointer);
	printf("La direcci�n de memoria de la variable pointer2 es: %p\n", &pointer2);
	printf("La direcci�n de memoria de la variable cadena[0] es: %p\n", &cadena[0]);
	printf("La direcci�n de memoria de la variable cadena[1] es: %p\n", &cadena[1]);
}

void asignandoDirecciones()
{
	int costo = 60;			//  Creo una variable entera llamada costo y guardo el valor de 60
	int *pointer;			//  Creo una variable apuntador a direccciones de m. donde se guardan enteros
	char *pointer2;
	//  Asignando direcciones de memoria
	pointer = &costo;		// Creo un alias: la variable costo "alias" pointer,
							// ahora pointer "apunta" a costo. 
	printf("La direcci�n de memoria guardada en la variable pointer es: %p\n", pointer);
	printf("El contenido de la variable costo es: %d\n", costo);	// impresi�n directa
	printf("El \"contenido de\" la variable pointer es: %d\n", *pointer);	// impresi�n indirecta

	*pointer = 50;

	printf("El contenido de la variable costo es: %d\n", costo);	// impresi�n directa
	printf("El \"contenido de\" la variable pointer es: %d\n", *pointer);	// impresi�n indirecta
}




void ejemploVariables()
{
	//  Versi�n con variables

	int a, b, c;

	printf("Dame el primer n�mero: ");
	scanf("%d", &a);		//  dentro de pa est� guardado &a
	printf("Dame el segundo n�mero: ");
	scanf("%d", &b);

	c = a + b;

	printf("El resultado de la suma de %d + %d es igual a %d\n", a, b, c);
}
void ejemploApuntadores()
{
	// Versi�n con apuntadores

	int a, b, c;
	int *pa, *pb, *pc;	// declaramos los apuntadores  

	pa = &a;			//  Asignamos los "apodos" - Guardamos las direcciones de memoria
	pb = &b;
	pc = &c;

	printf("Dame el primer n�mero: ");
	scanf("%d", pa);		//  dentro de pa est� guardado &a
	printf("Dame el segundo n�mero: ");
	scanf("%d", pb);

	*pc = *pa + *pb;

	printf("El resultado de la suma de %d + %d es igual a %d\n", *pa, *pb, *pc);
}
void apuntadoresYArreglos()
{
	int arreglo[5] = {0, 1, 2, 3, 4};		// Arreglo de 5 enteros llamado Arreglo
	int *arrptr[5] = {NULL, NULL, 0, 0, 0};	// Arreglo de apuntadores a entero llamado arrptr
	int *ptr = NULL;
	int i = 0;

	for(i = 0; i < 5; i++)
		printf("Arreglo[%d] = %d esta en la posici�n de memoria %p\n", i, arreglo[i],&arreglo[i]);

	ptr = &arreglo[2];		
	printf("La direccion guardada en ptr es: %p, y ahi esta el %d\n", ptr, *ptr);

	ptr = &arreglo[0];		
	printf("La direccion guardada en ptr es: %p, y ahi esta el %d\n", ptr, *ptr);

	ptr = arreglo;			// ptr apunta al elemento base ( [0] )
 	printf("La direccion guardada en ptr es: %p, y ahi esta el %d\n", ptr, *ptr);

	//////  Arreglo de Apuntadores
	arrptr[0] = arreglo;
	printf("La direccion guardada en arrptr[0] es: %p, y ahi esta el %d\n", arrptr[0], *arrptr[0]);

	arrptr[1] = &arreglo[1];
	printf("La direccion guardada en arrptr[1] es: %p, y ahi esta el %d\n", arrptr[1], *arrptr[1]);
	
}
void offset()
{
	int arreglo[] = { 'a', 'c', 'e', 'g', 'i', 'k', 'm', 'o', 'q', 's' };
	int *ptr = NULL, *ptr2 = NULL;
	int i;

	ptr = &arreglo[5];
	printf("La direccion guardada en ptr - 3 es: %p \n", ptr - 3);
	printf("La direccion guardada en ptr - 2 es: %p \n", ptr - 2);
	printf("La direccion guardada en ptr - 1 es: %p \n", ptr - 1);
	printf("La direccion guardada en ptr es: %p, y ahi esta el %c\n", ptr, *ptr);
	printf("La direccion guardada en ptr + 1 es: %p y ahi esta el %c\n", ptr + 1, *(ptr + 1));
	printf("La direccion guardada en ptr + 2 es: %p \n", ptr + 2);
	printf("La direccion guardada en ptr + 3 es: %p \n", ptr + 3);

	ptr = &arreglo[5];
	printf("La direccion guardada en ptr es: %p, y ahi esta el %c\n", ptr, *ptr);

	ptr = ptr + 1;
	printf("La direccion guardada en ptr es: %p, y ahi esta el %c\n", ptr, *ptr);
	printf("La direccion guardada en ptr + 1 es: %p y ahi esta el %c\n", ptr + 1, *(ptr + 1));

	for(i = 0; i < 10; i++)
		printf("Arreglo[%d] = %d esta en la posici�n de memoria %p\n", i, arreglo[i],&arreglo[i]);

	for(ptr = arreglo; ptr < &arreglo[10]; ptr++)
		printf("*ptr = %d esta en la posici�n de memoria %p\n", *ptr, ptr);
}

int main()
{	

	direccionesMemoria();
	system("pause");
	asignandoDirecciones();
	system("pause");
	ejemploVariables();
	system("pause");
	ejemploApuntadores();
	system("pause");
	apuntadoresYArreglos();
	system("pause");
	offset();

	system("pause");
	return 1;
}

