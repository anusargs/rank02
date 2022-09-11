char *ft_strrev(char *s)
{
	int len;
	int	i;
	int c;
	len = 0;
	i = 0;
	c = 0;
	while (s[len])
		len++;
	while (i < len/2)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
		i++;
	}
	return(s);
}