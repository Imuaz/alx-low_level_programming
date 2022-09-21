#include "main.h"

/**
 * *string_toupper- changes all lowercase let
 * ters of a string to uppercase
 * @str: pointer to tge string
 *
 * Return: the resulting string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}
	return (str);
}
