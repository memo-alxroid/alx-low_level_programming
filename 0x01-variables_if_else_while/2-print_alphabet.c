#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: prints the alphabet in lowercase
 *
 *
 * Return: Allways 0 (Success)
 *
 */

int main(void)
{
	char alpha = 'a';
 	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
