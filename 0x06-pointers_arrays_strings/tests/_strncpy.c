#include "main.h"
#include <string.h>

char *_strncpy(char *dest, char *src, int n)
	/*
{
	strncpy(dest, src, n);
	return(dest);
}
*/
{
	int i = 0;

	while(i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while(i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}
