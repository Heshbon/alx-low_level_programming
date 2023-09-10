#include <stdio.h>

/**
 * main - Prints all possible combinations of single digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		putchar(j + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
