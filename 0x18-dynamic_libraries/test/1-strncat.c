#include "main.h"

/**
 * *_strncat - concatenates two strings just
 * ike strcat but uses n-bytes from
 * src and src does not need null terminating
 * character '\0'
 * @dest: the destination string
 * @src: the source string
 * @n: nth character of the source string
 * Return:a pointer to the resulting dest str
 * ng
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
