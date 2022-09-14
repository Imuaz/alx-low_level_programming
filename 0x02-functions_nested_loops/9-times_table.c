#include "main.h"

/**
 * times_table-prints out the 9 times table starting from 0
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int n, m, p;

	for (n = 1; n <= 9; n++)
	{
		_putchar('0');

		for (n = 1; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');

			p = n * m;

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');

			_putchar(p % 10) + '0');
		}
		_putchar('\n');
	}
}
