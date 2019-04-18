#include <time.h>
#include <stdio.h>

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
