#include <stdio.h>

/**
 * main-prints out the 50 fibonacci numbers from 1 and 2 fowolled by newline
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int count;
	unsigned long fb1 = 0, fb2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fb1 + fb2;
		printf("%lu", sum);

		fb1 = fb2;
		fb2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
