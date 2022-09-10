#include <stdio.h>
#include <stdlib.h>

/**
 * main-prints out lowercase alphabets
 *
 * Return: Always 0 {Success)
 */
int main(void)
{
	/*Using for loop to print lowercase Alphabet */
	int Alphabet;


	for (Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
	{
		putchar(Alphabet);
	}
	return (0);
}
