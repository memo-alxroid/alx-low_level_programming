#include <stdio.h>
#include "main.h"

/**
* print_line - draws a straight line
* @n: the number of times the character _ should be printed
*
* Description:  draws a straight line
*
*
* Return: void
*
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
