#include "3-calc.h"

/**
 * op_add - sums a and b
 * @a: The first number.
 * @b: The second number.
 *
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: The first number.
 * @b: The second number.
 *
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - computes the product of a and b
 * @a: The first number.
 * @b: The second number.
 *
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - computes modulo of a and b.
 * @a: The first number.
 * @b: The second number.
 *
 * Return: modulo of a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
