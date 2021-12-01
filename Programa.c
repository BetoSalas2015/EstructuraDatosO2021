//  Sesión 46 - 01/12/2021
//  Programa.c
#include <stdlib.h>
#include <stdio.h>

FILE *entrada;
FILE *salida;
FILE *archivo;

struct Datos
{
	char nombre[30];
	int edad;
	char sexo;
	char direccion[30];
};

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

void copiaArchivo()
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
}
void escribeRegistro()
{
	//  Archivos de Acceso aleatorio
	struct Datos Agenda;

	Agenda.edad = 65;
	Agenda.sexo = 'H';
	strcpy(Agenda.nombre, "Juanito Perez");
	strcpy(Agenda.direccion, "2 sur 2");

	salida = fopen("Agenda.datos", "w");
	if(salida == NULL)			//  El archivo se pudo abrir?
	{							//  no se pudo abrir!!!
		printf("Error: El archivo no existe!\n");
		system("pause");
		return 1;				//  se acabó. Terminamos el programa con codigo de error 1
	}

	fwrite(&Agenda, sizeof(struct Datos), 1, salida); //  sizeof(Agenda) -  es lo mismo

	fclose(salida);
}
void leeRegistro()
{
	struct Datos Agenda;

	entrada = fopen("Agenda.datos", "r");
	if(entrada == NULL)			//  El archivo se pudo abrir?
	{							//  no se pudo abrir!!!
		printf("Error: El archivo no existe!\n");
		system("pause");
		return 1;				//  se acabó. Terminamos el programa con codigo de error 1
	}

	fread(&Agenda, sizeof(struct Datos), 1, entrada); //  sizeof(Agenda) -  es lo mismo

	printf("Nombre: %s, Edad: %d, Sexo: %c, Direccion: %s\n", Agenda.nombre, Agenda.edad, Agenda.sexo, Agenda.direccion);

	fclose(entrada);
}
int main()
{
	//  Archivos de Acceso aleatorio
	struct Datos Agenda[10];

	entrada = fopen("Agenda.datos", "r");
	if(entrada == NULL)			//  El archivo se pudo abrir?
	{							//  no se pudo abrir!!!
		printf("Error: El archivo no existe!\n");
		system("pause");
		return 1;				//  se acabó. Terminamos el programa con codigo de error 1
	}

	for(i = 0; i < 10; ++i)
	{
		fread(&Agenda, sizeof(struct Datos), 1, entrada); //  sizeof(Agenda) -  es lo mismo
		printf("Nombre: %s, Edad: %d, Sexo: %c, Direccion: %s\n", Agenda.nombre, Agenda.edad, Agenda.sexo, Agenda.direccion);
	}
	fclose(entrada);
		 
	system("pause");
	return 0;			//  todo bien: código 0
}