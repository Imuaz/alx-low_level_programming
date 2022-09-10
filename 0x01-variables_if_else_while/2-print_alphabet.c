#include <stdio.h>
#include <stdlib.h>

/**
 * main-prints out lowercase alphabets
 *
 * Return: Always 0 {Success)
 */
int main(void)
{
	/*Using for loop to print lowercase Alphabet*/
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
