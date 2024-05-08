#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1 if not found
 */


int binary_search(int *array, size_t size, int value)
{
	size_t a, start, end;

	if (array == NULL)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (a = start; a < end; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[a]);

		a = start + (end - start) / 2;

		if (array[a] == value)
			return (a);
		if (array[a] < value)
			start = a + 1;
		else
			end = a - 1;
	}
	return (-1);
}
