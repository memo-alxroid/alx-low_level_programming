#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the separator to be printed between strings
 * @n: number of strings passed
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_list;
	char *str;


	if (separator == NULL)
	{
		separator = "";
	}

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_list, char *);
		if (str == NULL)
		{
			str = "(nil)";
		}
		if (i < n - 1)
		{
			printf("%s%s", str, separator);
		}
		else
		{
			printf("%s", str);
		}
	}
	printf("\n");

	va_end(arg_list);
}
