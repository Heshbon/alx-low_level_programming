#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: checks the code
 * Return: print every string of character
 */
void puts2(char *str)
{
	int longi = 0;
	int a = 0;
	char *x = str;
	int b;

	while (*x != '\0')
	{
	x++;
	longi++;
	}
	a = longi - 1;
	for (b = 0 ; b <= a ; b++)
	{
	if (b % 2 == 0)
	{
	_putchar(str[b]);
	}
	}
	_putchar('\n');
}

