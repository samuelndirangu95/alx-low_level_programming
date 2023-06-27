#include "main.h"

/**
 * swap_int - Swaps the values of 2 integers
 * @a: First integer to swap
 * @b: Second integer to swap
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
