#include "main.h"

/**
 * set_bit - returns the value of a bit at a given index
 * @n: unsigned long int pointer to decimal number
 * @index: the index of the wanted bit
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
	{
		return (-1);
	}
	i = 1 << index;
	*n = (*n | i);
	return (1);
}
