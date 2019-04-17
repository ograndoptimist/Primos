bool checkout(int* vetor, int tamanho_vetor, int numero)
{
	int i;

	for(i = 0; i < tamanho_vetor; i++)
	{
		if(numero % vetor[i] == 0)
		{
			return false;			
		}
	}
		
	return true;
}
