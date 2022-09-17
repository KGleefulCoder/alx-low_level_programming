#include"main.h"

/**
 * print_line - print a straight line
 * @n: is the number oftimes the _ character
 * should be printed
 */

void print_line(int n)
{
	int lnChr;

	if (n <= 0);
	_putchar('\n');
	else
	{
		for(lnChr = 1; 1nChr <= n; ++lnChr)
			_putchar('_');
		_putchar('\n');
	}
}
