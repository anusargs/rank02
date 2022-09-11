int ft_atoi_base(const char *s,int base)
{
	int i;
	int	res;
	int	a;
	
	i = 0;
	res = 0;
	a = 1;
	while (s[i])
	{
		if (s[i] == ' ' || s[i] == '	')
			i++;
	}
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			a = -1;
		i++;
	}



}
