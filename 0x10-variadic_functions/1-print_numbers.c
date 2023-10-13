#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: the variadic parameter
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;

	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(a, int));

		if (b != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(a);
}
