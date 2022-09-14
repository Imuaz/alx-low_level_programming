#include <stdio.h>
#include "main.h"

/**
 * print_to_98-prints out all natural numbers from n to 98 followed by new line
 * @n:  the number to start to count
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
