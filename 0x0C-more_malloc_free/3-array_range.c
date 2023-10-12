#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range- allocates memory for an array
 * @min: min number
 * @max: max number
 * Return: a pointer to the allocated array
 */

int *array_range(int min, int max)
{
	int *allocatedArray;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	allocatedArray = malloc(sizeof(int) * (max - min + 1));
	if (allocatedArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		allocatedArray[i] = min;
		min++;
	}
	return (allocatedArray);
}
