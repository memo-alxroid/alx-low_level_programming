#include <stdio.h>

/**
 * _islower - Entry Point
 * @c: a charcahter to check
 *
 * Description: checks for lowercase character
 *
 *
 * Return: 1 if c is lowercase 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

