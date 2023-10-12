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
	int maxMin;

	if (min > max)
	{
		return (NULL);
	}
	maxMin = max - min;
	allocatedArray = malloc(sizeof(int) * (max - min));
	if (allocatedArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < maxMin + 1; i++)
	{
		allocatedArray[i] = min;
		min++;
	}
	return (allocatedArray);
}
