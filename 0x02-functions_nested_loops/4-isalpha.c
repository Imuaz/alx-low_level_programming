#include "main.h"

/**
 * _isalpha-checks fo alphabetic character.
 * @c:the character being checked
 *
 * Return:returns 1 if the condition is satisfy
 * and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
