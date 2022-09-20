#include "main.h"

/**
 * _puts - puts a string followed by a newline to standard output
 * @str: the string to be put
 * Return: 0 (Success)
 */
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
