#include <stdio.h>

/**
 * main - prints lowercase alphabets from a to z
 *	and followed by new line
 * Return: 0 if programm is successful, nonzero if otherwise
 */

int main(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
