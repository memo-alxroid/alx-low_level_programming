#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: string to scan
* @accept:  set of bytes
*
* Description: a function that searches a string for any of a set of bytes
*
*
* Return: a pointer to the byte in s that matches one of the bytes in accept
* or NULL if no such byte is found
*
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	int string_length = strlen(s);
	int accept_length = strlen(accept);

	for (i = 0; i < string_length; i++)
	{
		for (j = 0; j < accept_length; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
