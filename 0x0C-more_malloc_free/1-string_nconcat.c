#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the First string
 * @s2: the Second string
 * @n: number of bytes that should be concatnated
 * Return: newly allocated space in memory which contains the contents of s1
 * followed by the contents of s2, and null terminated
 * OR NULL on failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	char *concatString;
	int str1Size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	str1Size = strlen(s1);
	concatString = (char *) malloc(sizeof(char) * (str1Size + n + 1));
	if (concatString == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < str1Size; i++)
	{
		concatString[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concatString[i] = s2[j];
		i++;
	}
	concatString[i] = '\0';
	return (concatString);
}
