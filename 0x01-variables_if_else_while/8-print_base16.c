#include <stdio.h>

/**
 * main - Prints numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char m;

	for (i = 0; i < 10; i++)
		putchar(i + 'o');
	for (m = 'a'; m <= 'n'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
