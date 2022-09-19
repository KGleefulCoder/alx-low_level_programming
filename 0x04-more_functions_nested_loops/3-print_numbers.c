#include "main.h"

/**
 * print_numbers - print 0 - 9
 * only using _putchar twice
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
	int c = 48;

	while (c < 58)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
