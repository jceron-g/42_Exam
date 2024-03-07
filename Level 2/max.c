int	max(int *tab, unsigned int len)
{
	int aux;
	unsigned int i;
	
	i = 0;
	aux = tab[i];
	if(len == 0)
		return (0);
	while(i < len)
	{
		if (aux < tab[i])
		{
			aux = tab[i];
		}
		i++;
	}
	return(aux);
}

