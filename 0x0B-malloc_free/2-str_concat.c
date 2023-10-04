#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: the contents of the string
 * @s2: the contents of the string
 * Return: newly allocated space in memory which contains the contents
 */

char *str_concat(char *s1, char *s2)
{
	int a;
	int s1len = 0;
	int s2len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		s1len++;
	for (a = 0; s2[a] != '\0'; a++)
		s2len++;

	concat = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (concat == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
		concat[a] = s1[a];
	for (a = 0; s2[a] != '\0'; a++)
		concat[s1len + a] = s2[a];
	return (concat);
}
