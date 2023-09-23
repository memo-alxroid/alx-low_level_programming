#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: all possible combinations of three-digit numbers
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
	int thirdDigit;

	while (firstDigit < 8)
	{
		secondDigit = firstDigit + 1;
		while (secondDigit < 9)
		{
			thirdDigit = secondDigit + 1;
			while (thirdDigit < 10)
				{
					putchar(48 + firstDigit);
					putchar(48 + secondDigit);
					putchar(48 + thirdDigit);
					if (firstDigit != 7)
					{
						putchar(',');
						putchar(' ');
					}
					thirdDigit++;
				}
			secondDigit++;
		}
		firstDigit++;
	}
	putchar('\n');
	return (0);
}
