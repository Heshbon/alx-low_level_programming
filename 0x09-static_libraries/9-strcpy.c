#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: checks to
 * @src: checks from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int a = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; a < l ; a++)
	{
	dest[a] = src[a];
	}
	dest[l] = '\0';
	return (dest);
}
