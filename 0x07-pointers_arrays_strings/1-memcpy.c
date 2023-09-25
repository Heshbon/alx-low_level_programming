#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: memory storage
 * @src: memory where it's copied
 * @n: number of bytes
 *
 * Return: the memory copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
