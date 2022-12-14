#include "main.h"

/**
 * binary_to_uint - Converts a binary
 * number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return:the converted number,or 0 if b is
 * NULL or contains chars not 0 or 1 - 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int i;

	if (*b == '\0')
		return (0);
	for (i = 0; b[i];)
		i++;
	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num += (b[i] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
