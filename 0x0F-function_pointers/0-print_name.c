#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: a name pointer to char
 * @f: function pointer that returns nothing
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
