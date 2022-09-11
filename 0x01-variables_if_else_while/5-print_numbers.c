#include <stdio.h>

/**
 * main - main Entry
 * Description: prints all single numbers of base 10 
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	putchar('\n');

	return (0);
}
