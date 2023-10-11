#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: arguments passed to the main function
 * Return: (0) is sucess (1) if failure
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
