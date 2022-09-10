#include <stdio.h>

/**
 * main-prints out lowercase alphabet without e/q
 *
 * Return: 0 (susscess)
 */
int main(void)
{
	char ch;

	for(ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch !='e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
