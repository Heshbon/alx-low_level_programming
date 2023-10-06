#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - a function that allocates memory for an array
 * @size: the array size
 * @nmemb: number of allocated memory
 * Return:  a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = calloc(nmemb, size);
	if  (c == NULL)
		return (NULL);
	else
		return (c);
}
