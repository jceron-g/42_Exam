#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int len;
	int *range;
	int step;
	int	i;
	
	i = 0;
	step = -1;
	len = (end - start);
	if(len < 0)
		len *= -1;
	len++;
	range = malloc(sizeof(int) * len);
	if(range)
	{
		if (start < end)
			step = -1;
		while(i < len)
		{
			range[i] = end;
			end = end + step;
			i++;
		}
	}
	return(range);
}


