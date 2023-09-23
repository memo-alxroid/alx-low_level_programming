#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: all possible combinations of two-digit numbers
 * starting from 0
 *
 *
 * Return: Allways 0 (Success)
 *
 */

int main(void)
{
	int firstDigit = 0;
	int secondDigit;

	while (firstDigit < 9)
	{
		secondDigit = firstDigit + 1;
		while (secondDigit < 10)
		{
			putchar(48 + firstDigit);
			putchar(48 + secondDigit);
			if (firstDigit != 8)
			{
				putchar(',');
				putchar(' ');
			}
			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');
	return (0);
}
