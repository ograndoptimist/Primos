#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>

#include "primos.h"

#define NPRIMOS 1000

int main(int argc, char* argv[])
{
	clock_t start, end;
     	double cpu_time_used;

	start = clock();
	int primos[NPRIMOS];
	int n = 2;
	int numero = 0;
	
	primos[0] = 2;
	primos[1] = 3;
	primos[2] = 5;

	for(numero = 7; n < NPRIMOS; numero += 2)
	{
		if(checkout(primos, numero, n)) 
		{
			n++;
			primos[n] = numero;
		}		
	}

	for(n = 0; n < NPRIMOS; n++)
		printf("%d\n", primos[n]);

	end = clock();
     	cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
	printf("Tempo utilizado: %f\n", cpu_time_used);
	
	return 0;
}
