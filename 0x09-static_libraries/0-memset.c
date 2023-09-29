#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: bytes of the memory area pointed
 * @b: the value returned
 * @n: number of bytes to be changed
 *
 * Return: array changed
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
