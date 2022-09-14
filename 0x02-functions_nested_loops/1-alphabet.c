#include "main.h"

/**
 * print_alphabet-prints out lowercase alphab
 * et in newline
 */
void print_alphabet(void)
{
	char Alphabet;

	for (Alphabet = 'a'; Alphabet <= 'z'; Alphabet++)
		_putchar(Alphabet);

	_putchar('\n');
}
