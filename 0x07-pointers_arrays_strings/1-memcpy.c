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
	int i = 0;
	int a = n;

	for (; i < a; i++)
	{
		dest[i] = src[a];
		n--;
	}
	return (dest);
}
