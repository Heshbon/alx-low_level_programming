#include "main.h"

/**
 * flip_bits - function that flips to get from one number to another
 * @n: the integer value
 * @m: the interger value to convert
 * Return: the number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p;
	int b;

	p = n ^ m;
	b = 0;

	while (p)
	{
		b++;
		p &= (p - 1);
	}
	return (b);
}
