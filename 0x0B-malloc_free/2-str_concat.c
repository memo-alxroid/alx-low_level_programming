#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *  str_concat - concatenates two strings
 * @s1: the First string
 * @s2: the Second string
 * Return: newly allocated space in memory which contains the contents of s1
 * followed by the contents of s2, and null terminated
 * OR NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *concatString;
	int str1Size;
	int str2Size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str1Size = strlen(s1);
	str2Size = strlen(s2);
	concatString = (char *) malloc(sizeof(char) * (str1Size + str2Size + 1));
	if (concatString == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str1Size; i++)
	{
		concatString[i] = s1[i];
	}
	for (j = 0; j < str2Size; j++)
	{
		concatString[i] = s2[j];
		i++;
	}
	concatString[i] = '\0';
	return (concatString);
}
