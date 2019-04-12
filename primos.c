#include <stdio.h>

int checkout(int* vetor, int tamanho_vetor, int numero);

int main(int argc, char* argv[])
{
	int primos[1000];
	int cont = 3;
	int i;

	primos[0] = 2;
	primos[1] = 3;
	primos[2] = 5;

	for(i = 7; cont < 1001; i += 2)
	{
		if(checkout(primos, cont, i)) 
		{
			cont++;
			primos[cont] = i;
		}	
	}

	for(i = 0; i < 1000; i++)
		printf("%d\n", primos[i]);

	return 0;
}

int checkout(int* vetor, int tamanho_vetor, int numero)
{
	int i, cont = 0;
	for(i = 0; i < tamanho_vetor; i++)
	{
		printf("%d\n", vetor[i]);
		if(numero % vetor[i] == 0)
		{
			cont++;
			if(cont == 2)
			{
				return 0;
			}
		}
	}
	printf("passa aqui!\n");
	
	return 1;
}
