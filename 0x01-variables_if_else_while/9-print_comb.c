#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int j;

	for (j = 48; j <= 57; j++)
	{
		putchar(j);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
