#include "main.h"

#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: the pointer pointing to a string
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n, p;
	int m;

	if (b == NULL)
		return (0);

	for (m = 0; b[m]; m++)
	{
		if (b[m] != '0' && b[m] != '1')
			return (0);
	}
	for (p = 1, n = 0, m--; m >= 0; m--, p *= 2)
	{
		if (b[m] == '1')
			n += p;
	}
	return (n);
}
