#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return: void
 *
 */

void jack_bauer(void)
{
	int first = 0;
	int second;
	int third;
	int fourth;

	while (first < 3)
	{
		second = 0;
		while (second < 4)
		{
			third = first;
			fourth = second + 1;
			while (third < 6)
			{
				while (fourth < 10)
				{
					putchar(48 + first);
					putchar(48 + second);
					putchar(':');
					putchar(48 + third);
					putchar(48 + fourth);
					putchar('\n');
					fourth++;
				}
				fourth = 0;
				third++;
			}
			second++;
		}
		first++;
	}
}
