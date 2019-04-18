#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "bubble-sort.h"

#define TAMANHO 1000000

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
