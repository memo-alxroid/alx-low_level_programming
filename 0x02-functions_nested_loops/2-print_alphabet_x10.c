#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Description: prints the alphabet in lowercase 10 times
 *
 *
 * Return: Allways 0 (Success)
 *
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: prints the alphabet in lowercase
 *
 *
 * Return: Allways 0 (Success)
 *
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}

void print_alphabet_x10(void)
{
	int i = 0;

  	while (i < 10)
	{
		print_alphabet();
		i++;
	}
}
