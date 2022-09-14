#include "main.h"

/**
 * print_alphabet_x10-prints out lowercase alphab
 * et ten times (x10)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char Alphabet;

	while (i++ <= 9)
	{
		for (Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
			_putchar(Alphabet);
		_putchar('\n');
	}
}
