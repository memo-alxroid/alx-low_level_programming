#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: prints the alphabet in lowercase
 * except q and e
 *
 * Return: Allways 0 (Success)
 *
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q' || alpha == 'e')
		{
			alpha++;
			continue;
		}
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
