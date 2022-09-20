#include "main.h"

/**
 * *_strcpy - copys thes string pointed to
 * by src to the buffer pointed to by dest
 * @dest: pointing buffer
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; j < i ; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
