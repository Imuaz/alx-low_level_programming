#include "main.h"

/**
 * _puts - puts a string followed by a newline to standard output
 * @str: the string to be put
 * Return: 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		_putchar(str[1]);
		i++;
	}
	_putchar('\n');
}
