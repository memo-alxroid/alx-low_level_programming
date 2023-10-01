#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* reverse_array - Entry Point
* @a: array to be reversed
* @n: size of the array
*
* Description:  a function that reverses an array
*
*
* Return: void
*
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = (n - 1);
	int head;
	int tail;

	if (a == NULL)
	{
		return;
	}

	while (i < (n / 2))
	{
		head = a[i];
		tail = a[j];
		a[i] = tail;
		a[j] = head;
		i++;
		j--;
	}
}
