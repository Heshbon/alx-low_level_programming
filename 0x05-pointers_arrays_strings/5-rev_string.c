#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: checks the code
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int b;

	while (s[counter] != '\0')
	counter++;
	for (b = 0; b < counter; b++)
	{
	counter--;
	rev = s[b];
	s[b] = s[counter];
	s[counter] = rev;
	}
}

