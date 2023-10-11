#include <stdio.h>
#include "main.h"

/**
* _memcpy - fills memory with a constant byte
* @src: source to copy from
* @dest: destination top copy to
* @n: the number of bytes to be copied
*
*
* Description: function copies n bytes from memory area src to memory area dest
*
*
* Return: a pointer to dest
*
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
