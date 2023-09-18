#include "main.h"

/**
 * print_alphabet_x10  - Prints ten times the alphabet
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int b;
	char j;

	for (b = 0 ; b < 10 ; b++)
	{
		for (j = 'a' ; j <= 'z' ;  j++)
			_putchar(j);
		_putchar('\n');
	}
}
