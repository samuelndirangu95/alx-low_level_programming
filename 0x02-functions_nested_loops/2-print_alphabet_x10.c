#include "main.h"

/**
 *print_alphabet_x10 - Prints alphabet 10 times in lowercase
 *and in new line
 *return: If successful, returns integer value 0
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{

		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);

			c++;
		}

	_putchar('\n');

	i++;
	}
}
