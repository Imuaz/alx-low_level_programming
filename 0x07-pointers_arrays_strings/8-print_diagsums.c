#include "main.h"

/**
 * print_diagsums-prints the sum of the two
 * diagonals of a square matrix of integers
 * @a:array pointer of the matrix
 * @size: the matrix size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, l, b, s;/*l/b => lenght/breadth*/

	l = b = 0;
	s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		l += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		b += a[i];
	}

	printf("%d, %d\n", l, b);
}
