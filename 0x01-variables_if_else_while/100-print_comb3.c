#include <stdio.h>

/**
 * main-prints out all possible convinations of
 * two digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int dgt1, dgt2;

	for (dgt1 = 0; dgt1 <= 8; dgt1++)
	{
		for (dgt2 = 0; dgt2 <= 9; dgt2++)
		{

			putchar(dgt1 + '0');
			putchar(dgt2 + '0');

		if (dgt1 < 9 && dgt2 < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

