#include <stdbool.h>
#include <math.h>

bool checkout(int* vetor, int numero)
{
	int i;
	int cont = (int) sqrt(numero);

	for(i = 0; i < cont; i++)
	{
		if(numero % vetor[i] == 0)
		{
			return false;			
		}
	}
		
	return true;
}
