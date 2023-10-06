#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: contents of the string
 * @s2: contents of the string
 * @n: bytes of s2
 * Return: pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		s1len++;
	for (a = 0; s2[a] != '\0'; a++)
		s2len++;

	concat = malloc(sizeof(char) * (s1len + n) + 1);

	if (concat == NULL)
		return (NULL);
	if (n >= s2len)
	{
		for (a = 0; s1[a] != '\0'; a++)
			concat[a] = s1[a];
		for (a = 0; s2[a] != '\0'; a++)
			concat[s1len + a] = s2[a];
		concat[s1len + a] = '\0';
	}
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			concat[a] = s1[a];
		for (a = 0; a < n; a++)
			concat[s1len + a] = s2[a];
		concat[s1len + a] = '\0';
	}
	return (concat);
}
