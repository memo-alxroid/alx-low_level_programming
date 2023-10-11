#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strcat - Entry Point
* @dest: the destination string that need an appendent
* @src: the soruce string that will be appended to dest
*
* Description: appends the src string to the dest
*
*
* Return: a pointer to the resulting string dest
*
*/

char *_strcat(char *dest, char *src)
{
	char *tmp;

	tmp = dest;
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (tmp);
}
