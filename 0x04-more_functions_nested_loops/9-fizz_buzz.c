#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
	if (a % 3 == 0 && a % 5 != 0)
	{
	printf(" Fizz");
	}
	else if (a % 5 == 0 && a % 3 != 0)
	{
	printf(" Buzz");
	}
	else if (a % 3 == 0 && a % 5 == 0)
	{
	printf(" FizzBuzz");
	}
	else if (a == 1)
	{
	printf("%d", a);
	}
	else
	{
	printf(" %d", a);
	}
	}
	printf("\n");
	return (0);
}
