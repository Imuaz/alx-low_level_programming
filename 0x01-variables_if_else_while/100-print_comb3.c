#include <stdio.h>

/**
 * main-prints out all possible combs of 2 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 <= 9; d1++)
	{
		for (d2 = 0; d2 <= 9; d2++)
		{
			putchar(d1 + '0');
			putchar(d2 + '0');
		if (d1 < 9 && d2 < 9)
		{
		putchar(',');
		putchar(' ');
		}

	putchar('\n');

	return (0);
		}
	}
}
