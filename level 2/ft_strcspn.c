#include <string.h>
#include <stdio.h>

size_t  ft_strcspn(const char *s1, const char *s2)
{
	int i;
	int j;
	 i = 0;
	 j = 0;
	 while (s1[i])
	 {  
		 j = 0;
		 while (s2[j])
		 {
			 if(s1[i] == s2[j])
			 	return(i);
			j++;
		 }
		 i++;
	 }
	 i = 0;
	 while (s1[i])
	 	i++;
		return(i);