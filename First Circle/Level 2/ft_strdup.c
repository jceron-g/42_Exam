#include <stdlib.h>

int ft_strlen(char *string)
{
	int i = 0;
	
	while(string[i])
		i++;
	return(i);
}

char *ft_strdup(char *src)
{
	int i = 0;
	int len;
	char *string;

	len = ft_strlen(src);
	string = malloc(sizeof(char) * len + 1);
	if(!string)
		return(NULL);
	while(src[i])
	{
		string[i] = src[i];
		i++;
	}
	string[i] = '\0';
	return(string);
}