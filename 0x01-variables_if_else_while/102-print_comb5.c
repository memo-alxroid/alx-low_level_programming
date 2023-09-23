
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
	int first = 0;
	int second;
	int third;
	int fourth;

	while (first < 10)
	{
		second = 0;
		while (second < 10)
		{
			third = first;
			fourth = second + 1;
			while (third < 10)
			{
				while (fourth < 10)
				{
					putchar(48 + first);
					putchar(48 + second);
					putchar(' ');
					putchar(48 + third);
					putchar(48 + fourth);
					if (first < 9 || second < 8 || third < 9 || fourth < 9)
					{
						putchar(',');
						putchar(' ');
					}
					fourth++;
				}
				fourth = 0;
				third++;
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
