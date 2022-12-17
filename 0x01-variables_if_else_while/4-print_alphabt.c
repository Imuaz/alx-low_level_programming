#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	/*for (alphabet = 'a'; alphabet <= 'z'; alphabet++)*/
	{
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
