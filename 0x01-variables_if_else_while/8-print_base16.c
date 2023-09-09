#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 *
 * Return: Always 0 (Success)
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
