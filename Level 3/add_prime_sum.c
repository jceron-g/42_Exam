#include <unistd.h>

int ft_atoi(char *string)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while(string[i])
	{
		result = result * 10 + string[i] - '0';
		i++;
	}
	return(result);
}

void put_nbr(int number)
{
	char *base;

	base = "0123456789";
	if(number < 9)
		write(1, &base[number], 1);
	if(number > 9)
	{
		put_nbr(number / 10);
		put_nbr(number % 10);
	}
}

int is_prime(int number)
{
	int i;

	i = 2;

	if(number <= 1)
		return (0);
	while(i * i <= number)
	{
		if(number % i == 0)
			return(0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int number;
	int suma;

	if(argc == 2)
	{
		number = ft_atoi(argv[1]);
		suma = 0;
		while(number > 0)
		{
			if(is_prime(number))
				suma = suma + number;
			number--;
		}
		put_nbr(suma);
	}
	write(1, "\n", 1);
}



















