#include <string.h>
#include <stdio.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;

	if(!s1 || !s2)
		return(0);
	while(s1[j])
	{
		while(s2[i])
		{
			i = 0;
			if(s1[j] == s2[i])
				return((char *)&s1[j]);
			i++;
		}
		j++;
	}
	return(0);
}

int main(void)
{
	char *a = "Hola dla";
	char *b = "l";
	char *c;
	char *d;

	c = strpbrk(a, b);
	d = ft_strpbrk(a, b);
	printf("%s\n", c);
	printf("%s\n", d);
}