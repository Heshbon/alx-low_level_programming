#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @...: the variadic parameter
 * @n: the number of strings passed to the function
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *c;
	unsigned int a;

	va_start(strings, n);
	for (a = 0; a < n; a++)
	{
		c = va_arg(strings, char *);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
