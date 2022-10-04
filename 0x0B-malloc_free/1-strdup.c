#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @*str: string to be coppied
 * Return: returns a pointer to the duplicated string on success
 * and NULL is str=NULL or insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, j;
	char *StrDup;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	StrDup = malloc(sizeof(*str) * i);
	if (StrDup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		StrDup[j] = str[j];
		j++;
	}
	return (StrDup);
