#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strspn -  gets the length of a prefix substring
* @s: string to scan
* @accept: the prefix substring
*
* Description: a function that gets the length of a prefix substring
*
*
* Return: the number of bytes in the initial segment of s
* which consist only of bytes from accept
*
*/

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int lengthOfPrefixSubstring;
	int string_length = strlen(s);
	int accept_length = strlen(accept);

	for (i = 0; i < string_length; i++)
	{
		lengthOfPrefixSubstring = 1;
		for (j = 0; j < accept_length; j++)
		{
			if (s[i] == accept[j])
			{
				lengthOfPrefixSubstring = 0;
				break;
			}
		}
		if (lengthOfPrefixSubstring == 1)
		{
			break;
		}
	}
	return (i);
}
