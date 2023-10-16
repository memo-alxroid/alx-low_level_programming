#include <stdio.h>
#include "function_pointers.h"

/**
 *  int_index - searches for an integer
 * @array: input array.
 * @size: array size
 * @cmp: function pointer to the function that
 * will compare
 * Return: returns the index of searched integer
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int cmpResult;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		cmpResult = cmp(array[i]);
		if (cmpResult != 0)
		{
			return (i);
		}
	}

	return (-1);
}
