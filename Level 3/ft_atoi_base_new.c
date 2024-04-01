int ft_atoi_base(const char *str, int str_base)
{
	int	sign;
	int	i;
	int result;
	char *s1 = (char *)str;

	sign = 1;
	i = 0;
	if(s1[i] == '-')
		sign = -1;
	if(s1[i] == '+' || s1[i] == '-')
		i++;
	while(s1[i] && (s1[i] >= '0' && s1[i] <= '9') || (s1[i] >= 'a' && s1[i] <= 'f') || (s1[i] >= 'A' && s1[i] <= 'F'))
	{
		if (s1[i] >= '0' && s1[i] <= '9' && (s1[i] - '0') >= str_base)
			break;
