#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: stores the memory
 * @src: copies the memory
 * @n: the number of bytes
 *
 * Return: the copied memery
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[b];
		n--;
	}
	return (dest);
}
