#include <stdio.h>
#include "main.h"

/**
* main - fibbonci
*
* Description: prints first 50 fib
*
*
* Return: (0)
*
*/

int main(void)
{
	unsigned long i, b = 0, a = 1, c;

	for (i = 2; i < 52; i++)
	{
		c = a + b;
		printf("%lu", c);
		if (i < 51)
		{
			printf(", ");
		}
		b = a;
		a = c;
	}
	printf("\n");
	return (0);
}
