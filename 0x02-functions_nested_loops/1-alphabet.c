#include "main.h"

/**
 *print_alphabet - Prints alphabet in lowercase
 *return: If successful, returns integer value 0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);

		c++;
	}

	_putchar('\n');
}
