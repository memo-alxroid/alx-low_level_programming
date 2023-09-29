#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts_half - Entry Point
* @str: string
*
* Description: prints second half of a string
*
*
* Return: void
*
*/

void puts_half(char *str)
{
	int i;
	int strL = strlen(str);

	if (strL % 2 != 0)
	{
		i = (strL - 1) / 2;
	}
	else
	{
		i = strL / 2;
	}

	for (; i < strL; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
