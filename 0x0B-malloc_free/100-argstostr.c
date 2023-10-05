#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr -  a function that concatenates all the arguments of your program
 * @ac: the argument count to check the code
 * @av: the argument vector to check the code
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *conct;
	int a = 0, b = 0, c = 0, p = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			p++;
	}
	p += ac;

	conct = malloc(sizeof(char) * p + 1);
	if (conct == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			conct[c] = av[a][b];
			c++;
		}
		if (conct[c] == '\0')
		{
			conct[c++] = '\n';
		}
	}
	return (conct);
}
