#include "main.h"

/**
 * rev_string - reverses a string
 * @s: The string to be reversed
 * Return: no return value(void)
 */
void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0; 
	int l;
	char *str = s;
	char a;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	j = i - 1;
	for (; k < ((1 / 2) + 1) ; k++)
	{
		l = (j - k);
		a = s[k];
		s[k] = s[l];
		s[l] = a;
	}
}
