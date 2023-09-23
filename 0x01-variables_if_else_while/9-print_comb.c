#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: all possible combinations of single-digit numbers
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
		putchar(48 + base10);
		if (base10 != 9)
		{
			putchar(',');
			putchar(' ');
		}
		base10++;
	}
	putchar('\n');
	return (0);
}
