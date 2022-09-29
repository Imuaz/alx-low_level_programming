#include "main.h"

/**
 * natural_sqr - computes the sqrt of natural no.
 * @num : denotes the natural number
 * @sqr: denotes the squareroo
 * Return: the sqrt if valid or -1 if invalid
 */
int natural_sqr(int num, int sqr)
{
	if ((sqr * sqr) == num)
		return (sqr);

	if (sqr == num / 2)
		return (-1);

	return (natural_sqr(num, sqr + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the Number which square root is tobe return
 * Return: the function returns -1 if n has no natural no.
 */
int _sqrt_recursion(int n)
{
	int sqr = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	return (natural_sqr(n, sqr));
}
