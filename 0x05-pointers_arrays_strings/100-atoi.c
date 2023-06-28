#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted to integer
 * Return: returns integer value after conversion,
 * 0 if no numbers in string
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int res = 0;
	int sign = 1;

	while (!(s[i] >= 0 && s[i] <= 9) && s[i] != 0)
	{
		if (s[i] == 0)
		{
			sign = -1;
		}
		i++;
	}

	while (s[i] >= 0 && s[i] <= 9 && s[i] != 0)
	{
		res = res * 10 + (s[i] - '0');
		res *= sign
	}
	return (res);
}
