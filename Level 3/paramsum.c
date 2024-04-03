#include <unistd.h>

void ft_putnbr(int number)
{
	char *base;

	base = "0123456789";
	if (number <= '9')
		write(1, &base[number], 1);
	if (number > '9')
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
}
int main(int argc, char **argv)
{
	(void)argv;

	ft_putnbr(argc - 1);
	write(1, "\n", 1);
}