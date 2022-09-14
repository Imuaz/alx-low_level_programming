#include <stdio.h>

/**
 * main-finds and prints the sum of the even-valued fibonacci squenc terms.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	float tot_sum;
	unsigned long fb1 = 0, fb2 = 1, fbsum;

	while (1)
	{
		fbsum = fb1 + fb2;
		if (fbsum > 4000000)
			break;
		if ((fbsum % 2) == 0)
			tot_sum += fbsum;

		fb1 = fb2;
		fb2 = fbsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
