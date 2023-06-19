#include <stdio.h>

/**
 * main - print 0-9 using putchar
 *	while using int variable
 *Return: 0 if successful, nonzero if otherwise
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
