#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: checks the code
 * Return: print the second half of the string
 */
void puts_half(char *str)
{
	int a, b, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
	longi++;

	b = (longi / 2);

	if ((longi % 2) == 1)
	b = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
	_putchar(str[a]);
	_putchar('\n');
}

