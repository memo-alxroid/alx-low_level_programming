#include <stdio.h>
#include "main.h"

/**
* _puts - prints a string, followed by a new line
* @str: tha string to be printed
*
* Description: prints a string, followed by a new line
*
*
* Return: void
*
*/

void _puts(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return;
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
