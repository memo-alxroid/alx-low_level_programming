#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the separator charachter
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;

	if (n == 0)
	{
		return;
	}
	if (separator == NULL)
	{
		separator = "";
	}

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d%s", va_arg(arg_list, int), separator);
		}
		else
		{
			printf("%d", va_arg(arg_list, int));
		}
	}
	printf("\n");

	va_end(arg_list);
}
