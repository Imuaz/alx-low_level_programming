#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: the string whose lenght is to be returned
 * Return: lenght
 */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		s++;
		lenght++;
	}
	return (lenght);
}
