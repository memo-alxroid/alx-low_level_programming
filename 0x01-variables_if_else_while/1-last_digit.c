#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: print the last digit of the number stored in the variable n
 *
 * Return: Allways 0 (Success)
 *
 */
int main(void)
{
	int n;
	int divisor;
	int remainder;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	divisor = n / 10;
	remainder = divisor * 10;
	n -= remainder;
	printf("%d ", n);
	if (n > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (n < 6 && n != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("and is 0\n");
	}
	return (0);
}
