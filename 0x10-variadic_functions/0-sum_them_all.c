#include "variadic_functions.h"

/**
 * sum_them_all - sums of all its parameters.
 * @n: parameter numbers
 * Return: return sum or 0 if n==0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list prm;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(prm, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(prm, int);
	}
	va_end(prm);
	return (sum);
}
