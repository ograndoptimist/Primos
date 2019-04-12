#include <stdio.h>
#include <stdbool.h>

#define NPRIMOS 1000

bool checkout(int* vetor, int tamanho_vetor, int numero);

int main(int argc, char* argv[])
{
	int primos[NPRIMOS];
	int cont = 2;
	int i;

	primos[0] = 2;
	primos[1] = 3;
	primos[2] = 5;

	for(i = 7; cont < NPRIMOS; i += 2)
	{
		if(checkout(primos, cont, i)) 
		{
			cont++;
			primos[cont] = i;
		}		
	}

	for(i = 0; i < NPRIMOS; i++)
		printf("%d\n", primos[i]);
	
	return 0;
}

bool checkout(int* vetor, int tamanho_vetor, int numero)
{
	int i, cont = 0;

	for(i = 0; i < tamanho_vetor; i++)
	{
		if(numero % vetor[i] == 0)
		{
			cont++;
			if(cont == 2)
			{
				return false;
			}
		}
	}
		
	return true;
}
