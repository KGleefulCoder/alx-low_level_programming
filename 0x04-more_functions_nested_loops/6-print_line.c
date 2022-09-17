#include"main.h"

/**
 * print_line - print a straight line
 * @n: is the number oftimes the _ character
 * should be printed
 */

void print_line(int n)
{
	int i =0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
