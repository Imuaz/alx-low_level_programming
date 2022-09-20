#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an inter
 * @s: the string to be coverted
 * Return: result*sign
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int i = 0;
	int sign = 1;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i])
	{
		if (!(s[i] - '0' >= 0 && s[i] - '0' <= 9))
		return (-1);

		result = result * 10 + s[i] - '0';
		i++;
	}
	return (result * sign);
}
