#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: prints the alphabet in lowercase in reverse
 *
 *
 * Return: Allways 0 (Success)
 *
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
