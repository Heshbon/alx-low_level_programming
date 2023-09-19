#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int a, b;

	for (a = 1; a <= size; a++)
	{
	for (b = a; b < size; b++)
	{
	_putchar(' ');
	}

	for (b = 1; b <= i; b++)
	{
	_putchar('#');
	}

	_putchar('\n');
	}
	}
}

