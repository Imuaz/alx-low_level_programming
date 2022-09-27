#include "main.h"

/**
 * set_string-sets the value of a pointer to
 * a char.
 * @s: tge string whose value is to be set
 * @to: character pointer
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
