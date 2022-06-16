#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for(j = 0, dest[j] != '\0', j++);
	while(str[i] != '\0' && i < n)
	{
		dest[i + j] = str[i];
		i++;
	}
	return (dest)
}
