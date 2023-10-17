#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: the sum of all of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list arg_list;

	if (n == 0)
	{
		return (0);
	}
	
	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg_list, int);
	}

	va_end(arg_list);

	return (sum);
}
