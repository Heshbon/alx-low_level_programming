#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line
 * @str: checks the code
 * Return: print the second half of the string
 */
void puts_half(char *str)
{
	int i, b, longi;

	longi = 0;

	for (i = 0; str[i] != '\0'; i++)
	longi++;

	b = (longi / 2);

	if ((longi % 2) == 1)
	b = ((longi + 1) / 2);

	for (i = n; str[i] != '\0'; i++)
	_putchar(str[i]);
	_putchar('\n');
}

