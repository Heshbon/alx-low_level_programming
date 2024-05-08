#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, jump = 0, b = 0;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	while (array[b] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		a = b;
		b += jump;
		if (b >= size)
			break;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	b = b >= size ? size - 1 : b;
	while (a <= b)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}
	return (-1);
}
