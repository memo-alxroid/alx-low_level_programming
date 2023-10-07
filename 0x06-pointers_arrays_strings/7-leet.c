#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* leet - Entry Point
* @str: string
*
* Description: a function that encodes a string into 1337
*
*
* Return: the string encoded
*
*/

char *leet(char *str)
{
	int i;
	int j;
	int stringLength = strlen(str);
	char *alpha = "aAeEoOtTlL";
	int alphaLength = strlen(alpha);
	char *encod = "4433007711";

	for (i = 0; i < stringLength; i++)
	{
		for (j = 0; j < alphaLength; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = encod[j];
			}
		}
	}
	return (str);
}
