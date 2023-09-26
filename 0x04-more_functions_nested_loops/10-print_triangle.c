#include <stdio.h>
#include "main.h"

/**
* print_triangle - draws a square
* @size: the size of the triangle
*
* Description:  draws a triangle
*
*
* Return: void
*
*/

void print_triangle(int size)
{
	int i;
	int j;
	int k;
	int s = size;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{

		for (j = 0; j < s - 1; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
		s--;
	}
}
