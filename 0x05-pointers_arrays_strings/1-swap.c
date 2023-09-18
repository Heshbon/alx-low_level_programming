#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: interger to swap
 * @b: interger to swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
