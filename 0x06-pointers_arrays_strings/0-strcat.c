#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: String 1 being concatenated.
 * @src: String 2 being concatenated.
 * Return: returns final string after concatenation.
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (ptr);
}
