#include <stdio.h>

/**
 * main - Prints out single base 10 digit numbers starting from 0,
 * Using only putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
