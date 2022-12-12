#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings, it appends the src string to the
 * dest string and adds terminating null byte
 * @dest: the destion string
 * @src: source string
 * Return: the dest string after concatenation
 */
char *_strcat(char *dest, char *src)
{

	strcat(dest, src);
	return (dest);
}
