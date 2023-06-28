#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int length;
	int start;
	int end;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	start = 0;
	end = length - 1;

	while (end > start)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
