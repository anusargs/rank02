#include <unistd.h>
int	ft_atoi(const char *s)
{
	int i;
	int res;
	int a;
	i = 0;
	res = 0;
	a = 1;
	
	while(s[i] && (s[i] == '	' || s[i] == ' '))
			i++;
		if (s[i] == '-' || s[i] == '+')
		{
			if(s[i] == '-')
				a = -1;
			i++;
		}
		while (s[i] && (s[i] >= '0' && s[i] <= '9'))
		{
			res = res * 10 + s[i] - 48;
			i++;
		}
	return(res * a);
}
int main(int argc,char **argv)
{
	int i;
	i = 0;
	//ft_atoi(argv[1]);
	printf("%d",ft_atoi(argv[1]));
}
