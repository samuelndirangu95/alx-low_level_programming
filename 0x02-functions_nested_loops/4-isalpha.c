#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: variable being tested
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
