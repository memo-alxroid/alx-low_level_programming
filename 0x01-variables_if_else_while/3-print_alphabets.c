#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: prints the alphabet in lowercase
 * and then in uppercase
 *
 *
 * Return: Allways 0 (Success)
 *
 */

int main(void)
{
	char alphaL = 'a';
	char alphaU = 'A';

	while (alphaL <= 'z')
	{
		putchar(alphaL);
		alphaL++;
	}
	while (alphaU <= 'Z')
	{
		putchar(alphaU);
		alphaU++;
	}
	putchar('\n');
	return (0);
}
