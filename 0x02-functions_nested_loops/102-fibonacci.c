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
	int i, b = 0, a = 1, c;

	for (i = 2; i < 50; i++)
	{
		c = a + b;
		printf("%d", c);
		if (i < 49)
		{
			printf(", ");
		}
		b = a;
		a = c;
	}
	printf("\n");
	return (0);
}
