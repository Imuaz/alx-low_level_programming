#include "main.h"

/**
 * flip_bits - returns the number of bits need
 * to flip to get from one number to another
 * @n: the number
 * @m: number to be flip
 * Return: the number of bit needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, fbit;

	fbit = 0;
	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			fbit++;
	return (fbit);
}
