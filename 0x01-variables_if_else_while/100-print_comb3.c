#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: all possible combinations of single-digit numbers
 * starting from 0
 *
 *
 * Return: Allways 0 (Success)
 *
 */

int main(void)
{
	int firstDigit = 0;
  int secondDigit;

	while (firstDigit < 9)
	{
    secondDigit = firstDigit + 1;
		putchar(48 + base10);
    while (secondDigit < 10)
      {
        putchar(48 + base10);
        if (firstDigit != 8 && secondDigit != 9)
        {
             putchar(',');
			       putchar(' ');
        }
        secondDigit++;
      }
		firstDigit++;
	}
	putchar('\n');
	return (0);
}
