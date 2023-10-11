#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: number of arguments
 * @argv: arguments passed to the main function
 * Return: (0) is sucess (1) if failure
 */

int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
