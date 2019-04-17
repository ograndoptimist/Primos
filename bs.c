#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 1000000

void geraVetor(long* vetor, int n);
void imprimeArray(long* vetor, int n);
void bubbleSort(long* vetor, int n);

int main(int argc, char* argv[])
{
	long array[TAMANHO];
	int i;
	
	geraVetor(array, TAMANHO);
	imprimeArray(array, TAMANHO);
	
	printf("\n");	
	
	bubbleSort(array, TAMANHO);
	imprimeArray(array, TAMANHO);
	
	return 0;
}

void imprimeArray(long* vetor, int n)
{
	int i;

	for(i = 0; i < n; i++)
		printf("%ld\n", vetor[i]);
}

void geraVetor(long* vetor, int n)
{
	srandom(CLOCKS_PER_SEC);
	int i;

	for(i = 0; i < n; i++)
	{
		vetor[i] = random() % n;
	}	
	
}

void bubbleSort(long* vetor, int n)
{
	int i;
	int j;
	int aux;
	int cont;
	
	for(i = 0; i < n; i++)
	{
		cont = 0;
		for(j = 1; j < n; j++)
		{
			if(vetor[cont] > vetor[j])
			{
				aux = vetor[j];
				vetor[j] = vetor[cont];
				vetor[cont] = aux;
			}
			cont++;
		}
	}
}
