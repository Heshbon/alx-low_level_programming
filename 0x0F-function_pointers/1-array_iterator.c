#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function given as a parameter
 * @size: the size of an array
 * @array: the array of an element
 * @action: the pointer function
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
