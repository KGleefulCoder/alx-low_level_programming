#include"main.h"

/**
 * print_diagonal - print a diagonal line
 * @n: length of the line
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		whil(ii < i)
		{
			_putchar(' ');
			ii++
		}
		_putchar('\\');
		_puchar('\n');
		i++
	}
	if (i == 0)
		_putchar('\n');
}
