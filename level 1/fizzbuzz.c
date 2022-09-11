void ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	n = n % 10 + 48;
	write (1, &n, 1);
}
int main()
{
	int n;
	n = 1;
	while (n < 101)
	{
		if ( n % 15 == 0)
			write (1,"fizzbuzz",8);
		else if (n % 3 == 0)
			write (1, "fizz",4);
		else if (n % 5 == 0)
			write (1,"buzz",4);
		else 
			ft_putnbr(n);
		write(1, "\n", 1);
		n++;;
	}
}
