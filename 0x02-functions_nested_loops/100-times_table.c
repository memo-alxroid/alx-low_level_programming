#include "main.h"
/**
 * times_table_2 -  a function that prints the 9 times table, starting with 0
 * rone = row, cone = column, d = digits of current result
 * @n: the table number
 * Return: times table
 * add extra space past single digit
 */
void times_table_2(int n)
{
	int r, c, d;

	for (r = 0; r <= n; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= n; c++)
		{
			d = (r * c);
		if ((d / 10) > 0)
		{
			_putchar((d / 10) + '0');
		}
		else
		{
			_putchar(' ');
			_putchar(' ');
		}
			_putchar((d % 10) + '0');
		if (c < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
		_putchar('\n');
	}
}

/**
 * print_times_table - a function that prints the n times table starting with 0
 * rone = row, cone = column, d = digits of current result
 * @n: the table number
 * Return: times table
 * add extra space past single digit
 */

void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return;
	}
	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
		return;
	}
	times_table_2(n);
}
