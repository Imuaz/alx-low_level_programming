#include "main.h"

/**
 * *argstostr - concatenates all the arguments of the program
 * followed by newline
 * @ac: the argument
 * @av: argumentpointer
 * Return:returns NULL if ac == 0 or av == NULL
 * and pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int size, i, j, k;
	char *StrDup;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	/* now, counting the num. of chars in each string*/
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;
	/*allocating memory for total char number each in newline*/
	StrDup = malloc(sizeof(char) * size);
	if (StrDup == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			StrDup[k++] = av[i][j];
		}
		StrDup[k++] = '\n';
	}
	StrDup[k] = '\0';
	return (StrDup);
}
