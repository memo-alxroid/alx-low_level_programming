#include <stdio.h>
#include "main.h"

/**
* print_array - Entry Point
* @a: pointer to integer
* @n: number of elements of the array
*
* Description: prints n elements of an array of integers
*
*
* Return: void
*
*/

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
