#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rev_string - Entry Point
* @s: string to be reversed
*
* Description:  a function that reverses a string
*
*
* Return: void
*
*/

void rev_string(char *s)
{
	char s2;
	int strL = strlen(s);
	int i;
	int j;

	for (i = 0, j = strL - 1; i < j; i++, j--)
	{
		s2 = s[i];
		s[i] = s[j];
		s[j] = s2;
	}
}
