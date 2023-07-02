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
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
