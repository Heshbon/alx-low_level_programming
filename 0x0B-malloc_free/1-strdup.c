#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - a function that copies string to newly allocated memory
 * @str: a new string which is a duplicate of the string
 * Return: a pointer to a new string which is a duplicate of the string
 */

char *_strdup(char *str)
{
	int a;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (a = 0; str[a] != '\0' ; a++)
		copy[a] = str[a];

	return (copy);
}
