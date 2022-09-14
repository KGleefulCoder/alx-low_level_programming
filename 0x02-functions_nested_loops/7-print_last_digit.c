#include"main.h"

/**
 * print_last_digit - print last digit of a number.
 * @n: takes number input
 * Return: lastDigit
 */

int print_last_Digit(int n)
{
	int last_Digit;

	if (n < 0)
	{
		last_Digit = -1 * (n % 10);
		_putchar(last_Digit + 48);
		return (last_Digit);
	}
	else
	{
		last_Digit = n % 10;

	_putchar(last_Digit + 48);
	return (last_Digit);
	}
}
