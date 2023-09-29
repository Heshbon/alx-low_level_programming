#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 * @argc: counts the arguement being passed
 * @argv: the array of characters
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
