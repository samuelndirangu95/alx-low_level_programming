#include <stdio.h>

/**
 * main - print 0, 1, - 9
 * Return: 0 is successful, nonzero if otherwise
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
