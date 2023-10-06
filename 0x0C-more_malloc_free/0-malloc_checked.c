#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of the memory allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *c;

	c = malloc(b);
	if (c == NULL)
		exit(98);
	else
		return (c);
}
