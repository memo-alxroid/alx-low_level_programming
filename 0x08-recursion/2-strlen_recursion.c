#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *  _strlen_recursion- prints a string in reverse
 * @s: input string.
 * Return: no return.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
