#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* print_rev - Entry Point
* @s: string to be reversed
*
* Description: prints a string, in reverse
*
*
* Return: void
*
*/

void print_rev(char *s)
{
	int strL = strlen(s);
	int i;

	for (i = strL - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
