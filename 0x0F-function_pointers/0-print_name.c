#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to char
 * @f: pointer to function that returns nothing
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	int i;

	if (name == NULL || f == NULL)
		return;
for (i = 0; i < '\0'; i++)
	(*f)(name[i]);
}
