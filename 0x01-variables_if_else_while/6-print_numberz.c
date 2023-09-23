#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: prints all single digit numbers of base 10
 * starting from 0
 *
 *
 * Return: Allways 0 (Success)
 *
 */

int main(void)
{
	int base10 = 0;

	while (base10 < 10)
	{
		putchar(base10);
		base10++;
	}
	putchar('\n');
	return (0);
}
