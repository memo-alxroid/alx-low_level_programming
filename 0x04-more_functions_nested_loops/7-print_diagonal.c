#include <stdio.h>
#include "main.h"

/**
*  print_diagonal- draws a diagonal line
* @n: the number of times the character \ should be printed
*
* Description:  draws a diagonal line
*
*
* Return: void
*
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
