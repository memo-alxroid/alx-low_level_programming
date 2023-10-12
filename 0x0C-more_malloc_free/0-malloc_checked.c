#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * and initializes it with a specific char
 * @b: the size of the wanted allocated memory
 *
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *allocatedMemory;

	allocatedMemory = malloc(b);
	if (allocatedMemory == NULL)
	{
		exit(98);
	}
	return (allocatedMemory);
}
