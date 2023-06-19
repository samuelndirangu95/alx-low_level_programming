#include <stdio.h>

/**
 * main - print a-z in reverse
 * Return: 0 if program if successful, non-zero if otherwise
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
