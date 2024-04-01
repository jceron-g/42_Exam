#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i;
	int len;
	int *tab;
	int step;

	len = (end - start) + 1;
	i = 0;
	step = -1;
	tab = malloc(sizeof(int) * len);
	if(!tab)
		return(NULL);
	if(tab)
	{
		if(start < end)
			step = -1;
		while(i < len)
		{
			tab[i] = end;
			end = end + step;
			i++;
		}
	}
	return(tab);
}
