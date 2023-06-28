#include "main.h"

/**
 * _strcpy - copies string including '\0' to buffer
 * @dest: buffer where string is copied to
 * @src: string being copied
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
