#include <stdio.h>

/**
 * main - print all alphabet letters except q and e
 * Return: 0 if programs is successful, nonzero if otherwise
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar ('\n');

	return (0);
}
