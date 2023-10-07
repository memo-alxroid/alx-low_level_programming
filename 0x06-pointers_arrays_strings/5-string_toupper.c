#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* string_toupper - Entry Point
* @str: string
*
* Description: a function that changes all lowercase letters
* of a string to uppercase
*
*
* Return: the string all uppercase
*
*/

char *string_toupper(char *str)
{
	int i;
	int stringLength = strlen(str);

	for (i = 0; i < stringLength; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
