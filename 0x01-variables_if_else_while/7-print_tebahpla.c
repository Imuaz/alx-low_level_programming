#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * Return: (0) on Success
 */
int main(void)
{
	char rev_alpha = 'z';

	while (rev_alpha >= 'a')
	{
		putchar(rev_alpha);
		rev_alpha--;
	}
	putchar('\n');

	return (0);
}
