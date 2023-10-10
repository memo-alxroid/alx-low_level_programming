#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the chessboard
 * @a: input array.
 * @size: array size.
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int firstDiagonalSum = 0;
	int secondDiagonalSum = 0;

	for (i = 0; i < size; i++)
	{
		firstDiagonalSum += a[i * size + i];
		secondDiagonalSum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", firstDiagonalSum, secondDiagonalSum);
}
