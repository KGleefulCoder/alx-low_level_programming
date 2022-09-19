#include"main.h"

/**
 * main - print numbers 1 - 100 folllowed by a new line
 * numbers that are multiples of 3 print Fizz
 * numbers that are multiples of 5 print Buzz
 * numbers that are multiples of 3 n 5 print FizzBuzz
 * each number and word to be seperated by space
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1, i = 2;

	printf("%d", a);
	while (i < 101)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf(" %d", i);
		i++;
	}
	printf("\n");
	return (0);
}
