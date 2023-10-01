#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strncpy - Entry Point
* @dest: the destination string where the copy will go
* @src: the soruce string that will be copied to dest
* @n: number of charachters to be copied
* Description: appends the src string to the dest
*
*
* Return: a pointer to the resulting string dest
*
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *tmp;
	int i = 0;
	int srcL = strlen(src);

	tmp = dest;
	while (i < n && *src != '\0')
	{
		*dest = *src;
		i++;
		dest++;
		src++;
	}
	if (n >= srcL)
	{
		*dest = '\0';
	}
	return (tmp);
}
