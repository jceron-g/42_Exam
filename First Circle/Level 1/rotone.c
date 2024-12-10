#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *string)
{
	int	i;

	i = 0;
	while(string[i])
	{
		if ((string[i] >= 'a' && string[i] <=  'y') || (string[i] >= 'A' && string[i] <= 'Y'))
		{
			ft_putchar(string[i] + 1);
		}
		else if ((string[i] == 'z') || (string[i] == 'Z'))
		{
			ft_putchar(string[i] - 25);
		}
		else
			ft_putchar(string[i]);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	ft_putchar('\n');
}

