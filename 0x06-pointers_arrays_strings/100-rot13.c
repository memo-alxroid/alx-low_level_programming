#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* rot13 - Entry Point
* @str: string
*
* Description: a function that encodes a string using rot13
*
*
* Return: the string encoded
*
*/

char *rot13(char *str)
{
	int i;
	int j;
	int stringLength = strlen(str);
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	int alphaLength = strlen(alpha);
	char *encod = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; i < stringLength; i++)
	{
		for (j = 0; j < alphaLength; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = encod[j];
				break;
			}
		}
	}
	return (str);
}
