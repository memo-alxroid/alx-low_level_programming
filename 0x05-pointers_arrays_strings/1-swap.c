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
	int tmpValue;

	tmpValue = *a;
	*a = *b;
	*b = tmpValue;
}
