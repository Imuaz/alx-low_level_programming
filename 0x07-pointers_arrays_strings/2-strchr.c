#include "main.h"

/**
 * *_strchr -locates a character in a string.
 * @s: a string where the character located
 * @c: the character to be locate
 * Return: returns a pointer to the
 * first occurrence of the character c in
 * the string s, or NULL if the character
 * is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
