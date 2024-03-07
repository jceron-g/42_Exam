#include <unistd.h>

int ft_atoi(char *str)
{
	int	i;
	int result;
	int sign;

	sign = 1;
	result = 0;
	i = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-')
	   sign = -1;
	if(str[i] == '-' || str[i] == '+')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return(sign * result);
}

void ft_putnbr(int number)
{
	char *base = "0123456789";

	if(number <= 9)
		write(1, &base[number], 1);
	else
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
}

int main(int argc, char **argv)
{
	int	i;
	int number;

	i = 1;
	if(argc != 2)
		write(1, "\n", 1);
	else
	{
		number = ft_atoi(argv[1]);
		while(i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(number);
			write(1, " = ", 3);
			ft_putnbr(i * number);
			write(1, "\n", 1);
			i++;
		}
	}
	return(0);
}
	


























