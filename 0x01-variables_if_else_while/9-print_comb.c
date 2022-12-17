#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 on Success
 */
int main(void)
{
	int p_comb = 0;

	while (p_comb <= 9)
	{
		putchar((p_comb % 10) + '0');
		p_comb++;
		if (p_comb <= 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
