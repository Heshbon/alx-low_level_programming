#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array of integers.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in an array.
  * @value: The value to search for.
  * Return: If the value is not present or the array is NULL, -1.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}

	return (-1);
}
