#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string to search in
* @c: the charchter to search for
*
* Description: a function that locates a character in a string
*
*
* Return: a pointer to the first occurrence of the character c in the string s
* or NULL if the character is not found
*/

char *_strchr(char *s, char c)
{
	int i;
	int string_length = strlen(s);

	for (i = 0; i < string_length; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
