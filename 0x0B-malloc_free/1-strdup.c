#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *  _strdup- copy the string given as a parameter
 * @str: the string to be duplicated
 * Return: a pointer to a new string which is a duplicate of the string str
 * Or NULL if str = NULL
 */

char *_strdup(char *str)
{
	int i;
	char *copyString;
	int strSize = strlen(str);

	if (!str)
	{
		return (NULL);
	}

	copyString = (char *) malloc(sizeof(char) * strSize + 1);
	if (copyString == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strSize; i++)
	{
		copyString[i] = str[i];
	}
	return (copyString);
}
