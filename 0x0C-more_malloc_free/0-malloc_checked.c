#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size in bytes
 * Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *size;

	size = malloc(b);
	if (size == NULL)
		exit(98);

	return (size);
}
