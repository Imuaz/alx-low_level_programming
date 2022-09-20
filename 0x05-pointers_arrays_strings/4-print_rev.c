#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string whose reverse is to be print
 * Return: no return (void)
 */
void print_rev(char *s)
{
	int str;

	for (str = 0; s[str] != '\0'; str++)
	{
	}
	for (str = str - 1; str >= 0; str--)
	{
		_putchar(s[str]);
	}
	_putchar('\n');
}
