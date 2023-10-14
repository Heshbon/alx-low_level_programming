#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: is a list of types of arguments passed to the function
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int a = 0;
	char *p, *b = "";

	va_list n;

	va_start(n, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", b, va_arg(n, int));
					break;
				case 'i':
					printf("%s%d", b, va_arg(n, int));
					break;
				case 'f':
					printf("%s%f", b, va_arg(n, double));
					break;
				case 's':
					p = va_arg(n, char *);
					if (!p)
						p = "(nil)";
					printf("%s%s", b, p);
					break;
				default:
					a++;
					continue;
			}
			b = ", ";
			a++;
		}
	}
	printf("\n");
	va_end(n);
}
