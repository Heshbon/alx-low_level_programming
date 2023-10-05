#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - count the number of words in a string
 * @s: the string value
 * Return: returns a pointer to an array of strings (words)
 */

int count_word(char *s)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}

/**
 * strtow - a function that splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings or NULL
 */

char **strtow(char *str)
{
	char **s, *p;
	int x = 0, y = 0, z = 0, v = 0, l, j, k;

	while (*(str + z))
		z++;
	l = count_word(str);
	if (l == 0)
		return (NULL);

	s = (char **) malloc(sizeof(char *) * (l + 1));

	for (x = 0; x <= z; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (v)
			{
				k = x;
				p = (char *) malloc(sizeof(char) * (v + 1));
				if (p == NULL)
				return (NULL);
				while (j < k)
					*p++ = str[j++];
				*p = '\0';
				s[y] = p - v;
				y++;
				v = 0;
			}
		}
		else if (v++ == 0)
			j = x;
	}
	s[y] = NULL;
	return (s);
}
