#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 * in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0 on Success.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		num2 = num1 + 1;
		while (num2 <= 9)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			num2++;
			if (num1 < 8)
				putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
