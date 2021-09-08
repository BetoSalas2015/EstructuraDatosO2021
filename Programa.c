//  Factorial:   n! = n * n-1 * ... * 3 * 2 * 1
#include <stdio.h>			// para la entrada y salida
#include <stdlib.h>			// para el system()
#include <string.h>			// para el manejo de las cadenas

struct Persona 
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
	struct Datos Agenda;



	printf("Dame el nombre de la persona: ");
	gets(Agenda.nombre.Nombre);
	fflush(stdin);
	printf("Dame el apellido de la persona: ");
	gets(Agenda.nombre.Apellido);
	printf("Dame la edad de la persona: ");
	scanf("%d", &Agenda.edad);
	fflush(stdin);				//  Vaciamos el Buffer de teclado parqa forzar se pida el siguiente char
	printf("Dame el sexo de la persona: ");
	scanf("%c", &Agenda.sexo);
	fflush(stdin);	
	printf("Dame la dirección de la persona: ");
	gets(Agenda.direccion);

	printf("\nNombre: \t%s %s\nEdad: \t\t%d\nSexo:\t\t%c\nVive en \t%s\n", Agenda.nombre.Nombre, Agenda.nombre.Apellido, Agenda.edad, Agenda.sexo, Agenda.direccion);
	
	/*Agenda.edad = 0;
	Agenda.sexo = '0';
	strcpy(Agenda.nombre, "0");
	strcpy(Agenda.direccion, "0" );
	printf("\nNombre: \t%s\nEdad: \t\t%d\nSexo:\t\t%c\nVive en \t%s\n", Agenda.nombre, Agenda.edad, Agenda.sexo, Agenda.direccion);*/

	system("pause");
	return 1;
}