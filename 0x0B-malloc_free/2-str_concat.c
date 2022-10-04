#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns pointer to a newly allocated space in memory
 * containing the contents of s1 and s2, and null terminated
 * or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *StrDup;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	StrDup = malloc(sizeof(char) * (i + j + 1));
	if (StrDup == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		StrDup[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		StrDup[i] = s2[j];
		i++, j++;
	}
	StrDup[i] = '\0';
	return (StrDup);
}
