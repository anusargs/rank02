#include <stdlib.h>
char *ft_strdup(char *s)
{
	int	i;
	char *a;
	i  = 0;
	int j;
	j = 0;
	a = NULL;
	while(s[i])
		i++;
	a = malloc(sizeof(*a) * i + 1);
	if (!a)
		return(NULL);
	while (s[j])
	{
		a[j] = s[j];
		j++;
	}
	a[j] = '\0';
	return(a);
}