#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: Returns the value of the last digit
 * Return: b
 */
int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
