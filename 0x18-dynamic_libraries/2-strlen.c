#include <stdio.h>
#include "main.h"

/**
*  _strlen- returns the length of a string
* @s: a charchter array or string
*
* Description: returns the length of a string
*
*
* Return: length of a string
*
*/

int _strlen(char *s)
{
	int length = 0;

	if (s == NULL || *s == '\0')
	{
		return (0);
	}

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
