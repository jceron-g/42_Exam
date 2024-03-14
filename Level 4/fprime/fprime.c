#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void ft_fprime(int number)
{
	int	i;
	int	aux;

	aux = number;
	i = 2;
	if(aux == 1)
		printf("1");
	while(aux > 1)
	{
		if(aux % i == 0)
		{
			if(aux != number)
				printf("%s", "*");
			aux = aux / i;
			printf("%d", i);
		}
		else
			i++;
	}
}

int main(int argc, char **argv)
{
	int number;

	if (argc == 2)
	{
		number = atoi(argv[1]);
		ft_fprime(number);
	}
	printf("\n");
}

