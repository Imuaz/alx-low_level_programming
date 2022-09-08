#include <stdio.h>

/**
 * main-printing out the size of various variable types
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int v;
	long int w;
	long long int x;
	float y;
	char z;

	printf("The size of an interger is: %d byte(s)\n", sizeof(v));
	printf("The size of a long interger is: %d byte(s)\n" sizeof(w));
	printf("The size of a long long interger is: %d byte(s)\n" sizeof(x));
	printf("The size of a float is: %d byte(s)\n" sizeof(y));
	printf("The size of a character is: %d byte(s)\n" sizeof(z));
	return (0);
}
