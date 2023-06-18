#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints size of types
 * Return: 0 if function is successful, nonzero if otherwise
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %u byte(s)\n", sizeof(a));
	printf("Size of an int: %u byte(s)\n", sizeof(b));
	printf("Size of a long int: %u byte(s)\n", sizeof(c));
	printf("Size of a long long int: %u byte(s)\n", sizeof(d));
	printf("Size of a float: %u byte(s)\n", sizeof(e));

	return (0);
}
