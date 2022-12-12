#include "main.h"

/**
 * _memcpy-function copies n bytes from
 * memory area src to memory area dest
 * @dest: the pointer to the destination m
 * @src: source destination
 * @n: number of byte to be copies
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0, j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
