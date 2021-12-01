//  Sesión 46 - 01/12/2021
//  Programa.c
#include <stdlib.h>
#include <stdio.h>

FILE *entrada;
FILE *salida;
FILE *archivo;

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

	entrada = fopen("Programa.c", "r");
	if(entrada == NULL)			//  El archivo se pudo abrir?
	{							//  no se pudo abrir!!!
		printf("Error: El archivo no existe!\n");
		system("pause");
		return 1;				//  se acabó. Terminamos el programa con codigo de error 1
	}
	salida = fopen("Copia de Programa.c", "w");
	if(salida == NULL)			//  El archivo se pudo abrir?
	{							//  no se pudo abrir!!!
		printf("Error: El archivo no existe!\n");
		system("pause");
		return 1;				//  se acabó. Terminamos el programa con codigo de error 1
	}
	do
	{
		fgets(cadena,80,entrada);
		printf(cadena);
		fprintf(salida,cadena);
	} while( !feof(entrada) );

	fclose(entrada);			//  cerramos el flujo de datos!
	fclose(salida);

		 
	system("pause");
	return 0;			//  todo bien: código 0
}