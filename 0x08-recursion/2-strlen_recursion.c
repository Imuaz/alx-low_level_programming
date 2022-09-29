#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string which length to be printed
 * Return: _strlen_recursion
 */
int _strlen_recursion(char *s)
{
	int slen;

	slen = 0;
	if (*s)
	{
		slen++;
		slen += _strlen_recursion(s + 1);
	}
	return (slen);
}

