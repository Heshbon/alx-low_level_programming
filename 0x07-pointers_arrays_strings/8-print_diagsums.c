#include "main.h"
#include <stdio.h>

/**
 *  print_diagsums -  a function that prints the sum of the two diagonals
 *   of a square matrix of integers
 *   @a: the value input
 *   @size: the input value
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, b;

	sum1 = 0;
	sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 = sum1 + a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
		sum2 += a[b * size + (size - b - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
