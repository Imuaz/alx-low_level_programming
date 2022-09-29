#include "main.h"

/**
 * _pow_recursion -returns the value of x raised to the power of y.
 * @x: the number which power is to be printed
 * @y: the power number
 * Return: the function returns -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1); /*since any number**0 is 1*/
	}
	return (x * _pow_recursion(x, y - 1));
}
