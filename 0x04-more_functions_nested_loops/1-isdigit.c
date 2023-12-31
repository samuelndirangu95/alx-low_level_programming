#include "main.h"

/**
 * _isdigit - Checks for digit character
 * @c: character being analysed
 *
 * Return: returns 1 if c is a digit,
 * 0 if otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
