#include "main.h"
#include <unistd.h>

/**
 * _putchar - checks the character
 * @c: the character to print
 *
 * Return: 1 when success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
