#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: checks the code
 * Return: prints half of the string
 */
void puts_half(char *str)
{
	int b, n, longi;

	longi = 0;

	for (b = 0; str[b] != '\0'; b++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
	n = ((longi + 1) / 2);
	for (b = n; str[b] != '\0'; b++)
	_putchar(str[b]);
	_putchar('\n');
}

