//  Sesi�n 23 - 05/10/2021
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char origen, char destino, char aux)
{
		//  Programe su algoritmo aqu�
}

int main()
{
	int n;
	char or, dest, aux;
	printf("Dame el n�mero de discos: ");
	scanf("%d", &n);
	fflush(stdin);
	printf("Dame el poste origen: ");
	scanf("%c", &or);
	fflush(stdin);
	printf("Dame el poste destino: ");
	scanf("%c", &dest);
	fflush(stdin);
	printf("Dame el poste auxiliar: ");
	scanf("%c", &aux);

	hanoi(n, or, dest, aux);

	system("pause");
	return 1;
}
