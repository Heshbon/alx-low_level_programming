#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory storage
 * @src: memory where is copied
 * *@n: number of bytes
 *
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
	dest[b] = src[a];
	n--;
	}
	return (dest);
}
