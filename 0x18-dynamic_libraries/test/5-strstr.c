#include "main.h"

/**
 * _strstr-finds the first occurrence of the
 * substring needle in the string haystack.
 * The terminating null bytes (\0) are not
 * compared.
 * @haystack: the string to search through
 * @needle: needle of the substring
 * Return: pointer to the beginning of the
 * located substring, or NULL if the substri
 * ng is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *result;

	result = strstr(haystack, needle);

	return (result);
}
