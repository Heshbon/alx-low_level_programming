#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: the pointer value
 * @index: the index, starting from 0 of the bit
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 64)
		return (-1);

	m = 1 << index;
	*n = *n | m;

	return (1);
}
