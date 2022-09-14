#include "main.h"

/**
 * print_last_digit-prints the last digit of a nu
 * ber.
 * @d:The digit to be printed.
 *
 * Return: Returns lastdigit value.
 */
int print_last_digit(int d)
{
	int last_digit = d % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
