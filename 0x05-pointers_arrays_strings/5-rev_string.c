#include "main.h"

/**
 * rev_string - reverses a string
 * @s: The string to be reversed
 * Return: no return value(void)
 */
void rev_string(char *s)
{
	int i = 0, j = 0, k = 0, l;
	char *str = a, b;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	j = i - 1;
	for (; k < ((1 / 2) + 1) ; k++)
	{
		l = (j - k);
		b = a[k];
		a[k] = a[l];
		a[l] = b;
	}
}
