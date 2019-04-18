bool checkout(int* vetor, int numero, int n)
{
	int i;
	int limite = sqrt(numero);
	
	for(i = 0; i < limite; i++)
	{
		if(numero % vetor[i] == 0)
		{
			return false;			
		}
	}
			
	return true;
}
