#include <stdio.h>

/**
 * main - Prints out all the base 16 letter in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	char ch;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
