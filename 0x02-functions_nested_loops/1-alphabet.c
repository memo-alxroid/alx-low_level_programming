#include <stdio.h>
#include "main.h"

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
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
	return (0);
}
