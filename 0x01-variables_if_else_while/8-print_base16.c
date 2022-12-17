#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 *
 * Return: (0) on Success
 */
int main(void)
{
	char hex_num;

	for (hex_num = '0'; hex_num <= '9'; hex_num++)
		putchar(hex_num);

	hex_num = 'a';
	while (hex_num <= 'f')
	{
		putchar(hex_num);
		hex_num++;
	}
	putchar('\n');

	return (0);
}
