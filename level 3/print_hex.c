#include <unistd.h>
int ft_atoi(char *s)
{
	int i;
	int res;
	int a;
	i = 0;
	a = 1;
	res = 0;
	while(s[i] == ' ' || s[i] == '	')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if(s[i] == '_')
			a = -1;
		i++;
	}
	while(s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + s[i] - 48;
		i++;
	}
	return(res * a);
}
void print_hex(int n)
{
	if (n > 15)
		print_hex(n/16);
	write (1,&"0123456789abcdef"[n % 16], 1); 
}
int main(int argc,char **argv)
{
	int	i;
	i = 0;
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write (1, "\n",1);
	
}
