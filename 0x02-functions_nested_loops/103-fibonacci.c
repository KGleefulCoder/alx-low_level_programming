#include<stdio.h>

/**
 * main - Entry point
 * Description: prints the sum of even-values fibonacci
 * sequence not exceed 4000000
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);

	return (0);
}
