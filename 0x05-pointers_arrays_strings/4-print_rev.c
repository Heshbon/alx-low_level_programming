#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse
 * @s: string to be printed
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int a;

	while (*s != '\0')
	{
	longi++;
	s++;
	}
	s--;
	for (a = longi; a > 0; a--)
	{
	_putchar(*s);
	s--;
	}

	_putchar('\n');
}

