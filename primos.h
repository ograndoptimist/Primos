bool checkout(int* vetor, int tamanho_vetor, int numero)
{
	int i, cont = 0;

	for(i = 0; i < tamanho_vetor; i++)
	{
		if(numero % vetor[i] == 0)
		{
			return false;			
		}
	}
		
	return true;
}
