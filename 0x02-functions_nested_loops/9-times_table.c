#include <stdio.h>
#include "main.h"

/**
* times_table - prints nine times table
*
* Description: print time table
*
* Return: void
*/

void times_table(void)
{
	int i;
	int j;
	int res;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if (res > 9)
			{
				_putchar(res / 10 + 48);
				_putchar(res % 10 + 48);
			}
			else
			{
				_putchar(res + 48);
			}
			if (j < 9)
			{
				_putchar(',');
				if (res > 9)
				{
					_putchar(' ');
				}
				else
				{0
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
