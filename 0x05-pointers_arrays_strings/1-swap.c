#include "main.h"

/**
 * swap_int -swaps the value of interger
 * @a: interger 1
 * @b: interger 2
 * Return: 0 on Success
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
