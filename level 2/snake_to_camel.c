#include <unistd.h>
int ban(char *s)
{
	int i;
	i = 0;
	while (s[i])
	{
		{
			if(s[i] != '_' && !(s[i] >= 'a' && s[i] <= 'z'))
				return(0);
			i++;
		}
	}
	return(1);
}
int main(int argc,char **argv)
{
	int	i;
	i = 0;
	if(argc == 2)
	{
		while(argv[1][i] && ban(argv[1]))
		{
			if(argv[1][i] == '_')
			{
				i++;
				argv[1][i] -= 32;	
			}
			write (1,&argv[1][i],1);
			i++;
		}
	}
	write (1,"\n",1);
	return(0);
}
