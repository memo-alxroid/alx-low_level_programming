#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: the size of the array
 * @c: the charchter to inisialize the array with
 * Return:  a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *charArray;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	charArray = (char *) malloc(sizeof(char) * size);
	if (charArray == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		charArray[i] = c;
	}

	return (charArray);
}
