#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strncat - Entry Point
* @dest: the destination string that need an appendent
* @src: the soruce string that will be appended to dest
* @n: number of bytes to copy from src
*
* Description: appends at most n bytes from src string to the dest
*
*
* Return: a pointer to the resulting string dest
*
*/

char *_strncat(char *dest, char *src, int n)
{
	char *tmp;
	int i = 0;

	tmp = dest;
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (tmp);
}
