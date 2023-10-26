#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the interger value
 * @index: the index, starting from 0 of the bit
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > 64)
		return (-1);
	m = n >> index;

	return (m & 1);
}
