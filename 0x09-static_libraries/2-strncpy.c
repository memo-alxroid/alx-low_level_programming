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
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
