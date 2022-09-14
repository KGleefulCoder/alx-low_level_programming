#include"main.h"
#include<stdio.h>

/**
 * print_to_98 - print n to 98 counts seperated by coma,
 * followed by space and number should be printed in order
 * @n: input
 */

void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			n--;
		}
		else
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(",");
			}
			n++;
		}
	}
	printf("\n");
}
