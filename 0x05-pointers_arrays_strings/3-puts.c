#include "main.h"

/**
<<<<<<< HEAD
* _puts - prints a string, followed by a new line
* @str: tha string to be printed
*
* Description: prints a string, followed by a new line
*
*
* Return: void
*
*/

void _puts(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return;
	}

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
=======
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
>>>>>>> db45ed99b57178b554581d8de44a7dec75ce1fec
	}
	_putchar('\n');
}
