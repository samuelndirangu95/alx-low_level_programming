#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 *main - Entry Point
 *
 *Description - Print value n status: Postive or Zero or negative
 *
 *
 *Return- Always 0 (Success)
 *
 * */

int main(void)
{
	int n;

	srand(time(0));
	n=rand() % 101;

	if (n>0)
	{
		printf("%i is positive",n);
	}

	else if (n==0)
	{
		printf("%i is zero\n",n);
	}	
	else
	{
		printf("%i is negative\n",n);
	}
	
	return (0);

}
