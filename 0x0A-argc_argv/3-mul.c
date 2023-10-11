#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments passed to the main function
 * Return: (0) is sucess (1) if failure
 */

int main(int argc, char *argv[])
{
	int firstNumber;
	int secondNumber;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	firstNumber = atoi(argv[1]);
	secondNumber = atoi(argv[2]);

	printf("%d\n", firstNumber * secondNumber);
	return (0);
}
