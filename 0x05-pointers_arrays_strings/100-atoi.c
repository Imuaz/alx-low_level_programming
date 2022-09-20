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
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if
			(*s >= '0' && *s <= '9')

		result = result * 10 + (*s - '0');
		else if
			(result > 0)
				break;
	}

	return (result * sign);
}
