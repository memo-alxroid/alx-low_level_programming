#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* cap_string - Entry Point
* @str: string
*
* Description: a function that capitalizes all words of a string
*
*
* Return: the string  all words capitalizes
*
*/

char *cap_string(char *str)
{
	int i;
	int stringLength = strlen(str);

	if (str[0] >= 97 && str[0] <= 122)
	{
		str[0] -= 32;
	}
	for (i = 1; i < stringLength; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!'
		|| str[i] == '?' || str[i] == '\"' || str[i] == '(' || str[i] == ')'
		|| str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] != '\0' && str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
			continue;
		}
	}
	return (str);
}
