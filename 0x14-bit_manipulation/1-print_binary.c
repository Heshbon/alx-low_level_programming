#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the interger value
 */

void print_binary(unsigned long int n)
{
	unsigned long int m;
	int b;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (m = n, b = 0; (m >>= 1) > 0; b++)
		;
	for (; b >= 0; b--)
	{
		if ((n >> b) & 1)
			printf("1");
		else
			printf("0");
	}
}
