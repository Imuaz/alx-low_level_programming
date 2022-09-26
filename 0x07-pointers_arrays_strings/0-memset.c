#include "main.h"

/**
 * *_memset - function fills the first n
 * bytes of the memory area pointed to by
 * s with the constant byte b.
 * @s: the sring pointer
 * @b: constant bit to replace
 * @n: number of byte
 * Return: returns a pointer to the memory
 * area s.
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
