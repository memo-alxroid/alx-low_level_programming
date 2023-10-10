#include <stdio.h>
#include "main.h"

/**
 * factorial - prints a string in reverse
 * @n: integer number
 * Return: factorial of a given number.
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
