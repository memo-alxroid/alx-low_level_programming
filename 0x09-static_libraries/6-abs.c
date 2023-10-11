#include <stdio.h>
#include "main.h"

/**
 * _abs - Entry Point
 * @n: number to get its absolute
 *
 * Description: computes the absolute value of an integer
 *
 *
 * Return: absolute value of an integer
 *
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

