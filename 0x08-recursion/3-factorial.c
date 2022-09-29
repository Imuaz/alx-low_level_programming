#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number given
 * Return: returns -1 if n < 0 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n ==0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
