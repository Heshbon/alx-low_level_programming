#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum range of values
 * @max: maximum number of values stored
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *c;
	int x, p;

	if (min > max)
		return (NULL);
	p = max - min + 1;

	c = malloc(sizeof(int) * p);
	if (c == NULL)
		return (NULL);
	for (x = 0; min <= max; x++)
		c[x] = min++;
	return (c);
}
