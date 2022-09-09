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

	printf("The size of a character is: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("The size of an interger is: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("The size of a long interger is: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("The size of a long long interger is: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("The size of a float is: %lu byte(s)\n", (unsigned long)sizeof(z));
	return (0);
}
