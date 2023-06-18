#include <unistd.h>

/**
 * main - print "and that piece of art is useful" 
 * - Dora Korpar, 2015-10-19"
 *   followed by new line to Stderror
 * Return: 1 to indicate an error condition
 */

int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
	
	return (1);
}
