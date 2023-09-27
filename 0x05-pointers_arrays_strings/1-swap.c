#include <stdio.h>
#include "main.h"

/**
* swap_int - waps the values of two integers
* @a: first integer
* @b: second integer
*
* Description: swaps the values of two integers
*
*
* Return: void
*
*/

void swap_int(int *a, int *b)
{
	int *tmp;

	tmp = a;
	a = b;
	b = tmp;
}
