#include <stdio.h>

/**
 * main - print numbers of base16 in lowercase
 * Return: 0 if program is success, nonzero if otherwise
 */

int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
	putchar(digit);
	if (digit == 57)
		digit += 39;
	digit++;
	}
	putchar('\n');

	return (0);
}
