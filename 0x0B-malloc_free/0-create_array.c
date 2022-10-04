#include "main.h"

/**
 * *create_array- creates an array of chars, and initializes it with a
 * specific char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: NULL if size=0, or poiter to the array or NULL if its fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == 0)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
