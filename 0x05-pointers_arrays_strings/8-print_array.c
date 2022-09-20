#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n element of an array
 * of intergers followed by newline
 * @a: an array to be printed
 * @n: number of elements of a
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
