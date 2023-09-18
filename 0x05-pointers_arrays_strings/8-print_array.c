#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < (n - 1); j++)
	{
	printf("%d, ", a[j]);
	}
	if (j == (n - 1))
	{
	printf("%d", a[n - 1]);
	}
	printf("\n");
}
