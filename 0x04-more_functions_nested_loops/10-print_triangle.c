#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
			{
				_putchar(' ');
			}
			for (index = 0; index < hash; index++)
			{
				_putchar('#');
			}
			if (hash == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
