#include <stdlib.h>
#include <stdio.h>
int main(int argc,char **argv)
{
	int i;
	int res;
	res = 0 ;
	i = 0;
	if (argc == 4)
		{
			if (argv[2][0] == '*')
				{
					res = atoi(argv[1]) *  atoi(argv[3]);
					printf("%d",res);
				}
			else if (argv[2][0] == '/')
				{
					res = atoi(argv[1]) /  atoi(argv[3]);
					printf("%d",res);
				}
				else if (argv[2][0] == '%')
				{
					res = atoi(argv[1]) %  atoi(argv[3]);
					printf("%d",res);
				}
				else if (argv[2][0] == '+')
				{
					res = atoi(argv[1]) +  atoi(argv[3]);
					printf("%d",res);
				}
				else if (argv[2][0] == '-')
				{
					res = atoi(argv[1]) -  atoi(argv[3]);
					printf("%d",res);
				}
		}
		printf("\n");
}