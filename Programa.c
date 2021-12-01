//  Sesión 45 - 30/11/2021
//  Programa.c
#include <stdlib.h>
#include <stdio.h>

FILE *archivo;
FILE *archivo2;

void escribeArchivo()
{
	archivo = fopen("miArchivo.txt", "a");
	if(archivo == NULL)			//  El archivo se pudo crear?
	{							//  no se pudo crear!!!
		printf("Error: El archivo no se pudo crear\n");
		system("pause");
		return 1;				//  se acabó. Terminamos el programa con codigo de error 1
	}

	printf("Saludos programas!!!!\n");
	fprintf(archivo, "este texto esta agregado....\n");

	fclose(archivo);			//  cerramos el flujo de datos!
}

int main()
{
	char cadena[80];

	archivo = fopen("miArchivo.txt", "r");
	if(archivo == NULL)			//  El archivo se pudo abrir?
	{							//  no se pudo abrir!!!
		printf("Error: El archivo no existe!\n");
		system("pause");
		return 1;				//  se acabó. Terminamos el programa con codigo de error 1
	}

	while( !feof(archivo) )
	{
		//gets(cadena);
		fgets(cadena,80,archivo);
		printf("%s", cadena);
	}

	fclose(archivo);			//  cerramos el flujo de datos!
		 
	system("pause");
	return 0;			//  todo bien: código 0
}