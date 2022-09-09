#include <stdio.h>

/**
 * main-printing size of variable
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int v;
	long int w;
	long long int x;
	char y;
	float z;

	printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("The size of a long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("The size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("The size of a float: %lu byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
