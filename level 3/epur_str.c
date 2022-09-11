
int bar(char *s)
{
	int i = 0;
	int count = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '	'))
		i++;
	while (s[i])
	{
		while(s[i] && s[i] != ' ' && s[i] != '	')
				i++;
		count++;
		while(s[i] && (s[i] == ' ' || s[i] == '	'))
			i++;
	}
	return(count);
}

int main(int argc,char **argv)
{
	int i = 0;
	int count = bar(argv[1]);
	while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '	'))
		i++;
	while (count)
	{
		while (argv[1][i] && !(argv[1][i] == ' ' || argv[1][i] == '	'))
		{
			write(1,&argv[1][i],1);
			i++; 	
		}
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '	'))
			i++;
		if (argv[1][i])
			write(1," ",1);
		count--;
	}
}