#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer
 * @b: checks the buffer
 * @size: checks the content of the size
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int o, x, y;

	o = 0;

	if (size <= 0)
	{
	printf("\n");
	return;
	}
	while (o < size)
	{
	y = size - o < 10 ? size - o : 10;
	printf("%08x: ", o);
	for (x = 0; x < 10; x++)
	{
	if (x < y)
	printf("%02x", *(b + o + x));
	else
	printf("  ");
	if (x % 2)
	{
	printf(" ");
	}
	}
	for (x = 0; x < y; x++)
	{
	int c = *(b + o + x);

	if (c < 32 || c > 132)
	{
	c = '.';
	}
	printf("%c", c);
	}
	printf("\n");
	o += 10;
	}
}
