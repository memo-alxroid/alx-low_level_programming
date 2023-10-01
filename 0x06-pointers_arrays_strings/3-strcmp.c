#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strcmp - Entry Point
* @s1: the first string in the comparison
* @s2: the second string in the comparison
*
* Description: compares two strings
*
*
* Return: (int < 0) if s1 < s2 or (int > 0) if s1 > s2
* or (0) if s1 = s2
*
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
