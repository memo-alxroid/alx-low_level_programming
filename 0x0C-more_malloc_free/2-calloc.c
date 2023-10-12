#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: size of each elements
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocatedMemory;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	allocatedMemory = malloc(nmemb * size);
	if (allocatedMemory == NULL)
	{
		return (NULL);
	}
	return (allocatedMemory);
}
