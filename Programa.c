//  Sesión 13 - 13/09/2021

//  Factorial:   n! = n * n-1 * ... * 3 * 2 * 1
#include <stdio.h>			// para la entrada y salida
#include <stdlib.h>			// para el system()
#include <string.h>			// para el manejo de las cadenas

struct Persona				//  DEfine el tipo de dato llamado "Persona"
{
	char Nombre[15];
	char Apellido[15];
};

struct Datos				// DEfine un nuevo tipo de dato "Datos"
{ 
	struct Persona nombre;
	int edad;
	char sexo;
	char direccion[30];
};


int main()
{
	int costo = 60;
	int posicion;
	//struct Datos Agenda;		//  DEfino una variable del tipo struct Agenda
	struct Datos Agenda[10];	//  DEfino un  arreglo de variables del tipo struct Agenda

	//printf("En qué posición deseas se guarden los datos: ");
	//scanf("%d", &posicion);
	//fflush(stdin);

	for(posicion = 0; posicion < 2; posicion++)
	{
		printf("\nPersona no. %d:\n", posicion);
		printf("Dame el nombre de la persona: ");
		gets(Agenda[posicion].nombre.Nombre);
		fflush(stdin);
		printf("Dame el apellido de la persona: ");
		gets(Agenda[posicion].nombre.Apellido);
		printf("Dame la edad de la persona: ");
		scanf("%d", &Agenda[posicion].edad);
		fflush(stdin);				//  Vaciamos el Buffer de teclado parqa forzar se pida el siguiente char
		printf("Dame el sexo de la persona: ");
		scanf("%c", &Agenda[posicion].sexo);
		fflush(stdin);	
		printf("Dame la dirección de la persona: ");
		gets(Agenda[posicion].direccion);

		
	} 

	for(posicion = 0; posicion < 2; posicion++)
	{
		printf("\nNombre: \t%s %s\nEdad: \t\t%d\nSexo:\t\t%c\nVive en \t%s\n", Agenda[posicion].nombre.Nombre, Agenda[posicion].nombre.Apellido, Agenda[posicion].edad, Agenda[posicion].sexo, Agenda[posicion].direccion);
	}
	/*Agenda.edad = 0;
	Agenda.sexo = '0';
	strcpy(Agenda.nombre, "0");
	strcpy(Agenda.direccion, "0" );
	printf("\nNombre: \t%s\nEdad: \t\t%d\nSexo:\t\t%c\nVive en \t%s\n", Agenda.nombre, Agenda.edad, Agenda.sexo, Agenda.direccion);*/

	system("pause");
	return 1;
}