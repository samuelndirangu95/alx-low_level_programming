#include "main.h"

/**
 * _strlen - Evaluates the length of a string
 * @s: string to be evaluated
 * Return: length of String
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
