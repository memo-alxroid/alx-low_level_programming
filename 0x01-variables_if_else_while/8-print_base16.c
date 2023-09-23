#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: prints all the numbers of base 16 in lowercase
 * starting from 0
 *
 *
 * Return: Allways 0 (Success)
 *
 */

int main(void)
{
	int base16 = 0;
  char alpha = 'a';

	while (base16 < 10)
	{
		putchar(48 + base16);
		base16++;
	}
  while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
