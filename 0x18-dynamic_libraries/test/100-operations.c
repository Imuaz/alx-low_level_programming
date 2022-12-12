#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - adds a and b
 *
 * Return: 0 on success
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - subtracts b from a
 *
 * Return: 0 on success
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplys a and b
 *
 * Return: 0 on success
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - divides a by by
 * Return: 0 on success
 */
int div(int a, int b)
{
	return (a / b);
}
/**
 * mod - prints a remainder
 *
 * Return: 0 on success
 */
int mod(int a, int b)
{
	return (a % b);
}
