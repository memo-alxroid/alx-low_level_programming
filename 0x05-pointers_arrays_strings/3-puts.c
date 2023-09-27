#include <stdio.h>
#include "main.h"

/**
* _puts - prints a string, followed by a new line
* @s: tha string to be printed
*
* Description: prints a string, followed by a new line
*
*
* Return: void
*
*/

void _puts(char *s)
{
	if (s == NULL || *s == '\0')
	{
		return;
	}

	while (s != '\0')
	{
		_putchar(*s);
		s++;
	}
}
