char to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	get_digit(char c, int digits_in_base)
{
	int	max_digit;
	
	if (digits_in_base < 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';
	if (c >= '0' && c <= '9' && c < max_digit)
		return(c - '0');
	else if (c >= 'a' && c <= 'f' && c < max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int	result;
	int	sign;
	int	digit;
	
	result = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		++str;
	}
	while((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		result = result * str_base;
		result = result + (digit * sign);
		++str;
	}
	return (result);
}
