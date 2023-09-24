#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Entry Point
 * @n: number to get the last digit from
 *
 * Description: prints the last digit of a number
 *
 *
 * Return: the value of the last digit
 *
 */

int print_last_digit(int n)
{
	int divisor;
	int lastDigit;

	divisor = n / 10;
	divisor = divisor * 10;
	lastDigit = n - divisor;
	_putchar(lastDigit);
	return (lastDigit);
}
