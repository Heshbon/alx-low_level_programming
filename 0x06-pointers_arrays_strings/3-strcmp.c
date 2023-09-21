#include "main.h"

/**
 * _strcmp -  a function that compares two strings
 * @s1: the input value
 * @s2: the input value
 * Return: s1[b] - s2[b]
 */

int _strcmp(char *s1, char *s2)
{
	int b;

	b = 0;
	while (s1[b] != '\0' && s2[b] != '\n')
	{
		if (s1[b] != s2[b])
		{
			return (s1[b] - s2[b]);
		}
		b++;
	}
	return (0);
}
