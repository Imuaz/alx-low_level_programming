#include "main.h"

/**
 * _islower-checks out alphabet whether it is low
 * er or upper character
 * @c: the character to be checked
 *
 * Return: will ruturn 1 if the condion is true
 * and 0 if it not true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
