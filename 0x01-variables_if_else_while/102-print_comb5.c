
#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: all possible combinations of two two-digit numbers
 * starting from 0
 *
 *
 * Return: Allways 0 (Success)
 *
 */

int main(void)
{
	int firstDigit = 0;
	int secondDigit = 0;
	int thirdDigit = 0;
	int fourthDigit = 1;

	while (firstDigit < 10)
	{
		while (secondDigit < 9)
		{
			while (thirdDigit < 10)
			{
				while (fourthDigit < 10)
				{
						putchar(48 + firstDigit);
						putchar(48 + secondDigit);
						putchar(' ');
						putchar(48 + thirdDigit);
						putchar(48 + fourthDigit);
						if (secondDigit != 8)
						{
							putchar(',');
							putchar(' ');
						}
						fourthDigit++;
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
