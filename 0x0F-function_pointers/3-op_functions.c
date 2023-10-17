#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: addtion result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: subtraction result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: multiplication result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers but can not divide by zero
 * @a: first number
 * @b: second number can not be zero
 * Return: division result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error in div\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - module two numbers but can not module by zero
 * @a: first number
 * @b: second number can not be zero
 * Return: modules result
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error in mod\n");
		exit(100);
	}
	return (a % b);
}
