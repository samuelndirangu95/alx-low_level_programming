#include "main.h"

/**
 * _strncat - concatenates 2 strings while using at most
 * n bytes from src
 * @dest: string 1 being concatenated
 * @src: string 2 being concatenated
 * @n: number of bytes from src being used in concatenation
 * Return: returns result of concatenation.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	*dest = '\0';

	return (ptr);
}
