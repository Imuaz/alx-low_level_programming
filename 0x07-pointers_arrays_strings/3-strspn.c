#include "main.h"

/**
 * _strspn - gets the length of a prefix
 * substring.
 * @s:the string to search from
 * @accept:the prefix substring to measure
 * Return: returns the number of bytes in
 * the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;

		len = strspn(accept, s);

		return (len / '0');
}
