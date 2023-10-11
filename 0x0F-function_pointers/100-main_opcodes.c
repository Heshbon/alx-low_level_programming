#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the opcodes of its own main function
 * @argv: the argument vector
 * @argc: the argument value
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	char *c;

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

	c = (char *)main;

	for (b = 0; b < a; b++)
	{
		if (b == a - 1)
		{
			printf("%02hhx\n", c[b]);
			break;
		}
		printf("%02hhx", c[b]);
	}
	return (0);
}
