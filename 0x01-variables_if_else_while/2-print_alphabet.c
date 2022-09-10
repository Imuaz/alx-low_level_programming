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
	char ch = 'a' ;

	while (ch <= 'z')
	{
		putchar (ch);
		ch++;
	}
	return (0);
}
