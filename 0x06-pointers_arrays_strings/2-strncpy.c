#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string 1 being copied to
 * @src: string 2 being copied from
 * @n: number of bytes from src being copied
 * Return: returns result of copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	*dest = '\0';

	return (ptr);
}
