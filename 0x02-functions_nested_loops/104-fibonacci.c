#include <stdio.h>

/**
 * main - finds and prints the first ninety eight Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int a;
	unsigned long int fib = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int fib1;
	unsigned long int fib2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", fib);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", aft);
		aft += fib;
		fib = aft - fib;
	}

	fib1 = (fib / l);
	fib2 = (fib % l);
	aft1 = (aft / l);
	aft2 = (aft % l);

	for (a = 93; a < 99; ++a)
	{
		printf(", %lu", fib1 + (aft2 / l));
		printf("%lu", aft2 % l);
		fib1 = aft1 + fib1;
		fib1 = aft1 - fib1;
		aft2 = aft2 + fib2;
		fib2 = aft2 - fib2;
	}
	printf("\n");
	return (0);
}
