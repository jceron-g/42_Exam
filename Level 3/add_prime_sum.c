#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void ft_putnbr(int number)
{
	char *base;

	base = "0123456789";
	if(number <= 9)
		write(1, &base[number], 1);
	if(number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
}

int ft_atoi(char *str)
{
	int result = 0;
	int i = 0;
	int sign = 1;
	
	if(str[i] == '-')
		sign *= -1;
	if(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return(result * sign);
}

int is_prime(int number)
{
	int i;

	i = 2;
	if(number <= 1)
		return(0);
	while(i * i <= number)
	{
		if(number % i == 0)
			return(0);
		number = number / i;
		i++;	
	}
	return(1);
}
int main(int argc, char **argv)
{
	int sum_prime = 0;
	int number;
	
	if(argc == 1)
		ft_putnbr(0);
	if(argc == 2)
	{
		number = ft_atoi(argv[1]);
		while(number > 0)
		{
			if(is_prime(number) == 1)
				sum_prime =sum_prime + number;
			number--;
		}		
		ft_putnbr(sum_prime);
	}
	write(1, "\n", 1);
}