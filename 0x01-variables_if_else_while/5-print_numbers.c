#include <stdio.h>

/**
 * main - print all single digit numbers
 * Return: 0 if successful, nonzero if otherwise
 */

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
