#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: the value input
 * @accept: the value input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (0);
}
