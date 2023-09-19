#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line
 * @size: size of the triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int a, b, i;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 1; a <= size; a++)
	{
	for (b = size - a; b > 1; b--)
	{
	_putchar(32);
	}
	for (i = 0; i <= a; i++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
