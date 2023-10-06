#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc -  a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: contents to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;
	char *b;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	c = malloc(new_size);
	if (!ptr)
		return (NULL);
	b = ptr;
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			c[a] = b[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			c[a] = b[a];
	}
	free(ptr);
	return (c);

}
