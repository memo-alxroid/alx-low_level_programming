#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* puts2 - Entry Point
* @str: string
*
* Description: prints every other character of a string
*
*
* Return: void
*
*/

void puts2(char *str)
{
	int i;
	int strL = strlen(str);

	for (i = 0; i < strL; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
