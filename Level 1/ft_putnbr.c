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