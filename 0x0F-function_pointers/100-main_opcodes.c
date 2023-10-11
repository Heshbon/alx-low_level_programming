#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - a program that prints the opcodes of the program
 * @a: the address value
 * @n: the number of bytes
 * Return: 0
 */

void print_opcodes(char *a, int n)
{
	int y;

	for (y = 0; y < n; y++)
	{
		printf("%.2hhx", a[y]);
		if (y < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - a program that prints the opcodes of its own main function
 * @argv: the argument vector
 * @argc: the argument value
 * Return: 0
 */

int main(int argc, char **argv)
{
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, a);
	return (0);
}
