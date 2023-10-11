#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: number of arguments
 * @argv: arguments passed to the main function
 * Return: void.
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (1);
}
