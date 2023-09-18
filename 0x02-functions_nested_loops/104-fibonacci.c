#include <stdio.h>

/**
 * main - finds and prints the first ninety eight Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_bef1, fib1_bef2, fib2_bef1, fib2_bef2;
	unsigned long bef1, bef2;

	for (count = 0 ; count < 92 ; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);
		fib1 = fib2;
		fib2 = sum;
	}
	fib1_bef1 = fib1 / 1000000000;
	fib2_bef1 = fib2 / 1000000000;
	fib1_bef2 = fib1 % 1000000000;
	fib2_bef2 = fib2 % 1000000000;
	for (count = 93 ; count < 99 ; count++)
	{
		bef1 = fib1_bef1 + fib2_bef1;
		bef2 = fib1_bef2 + fib2_bef2;
		if (fib1_bef2 + fib2_bef2 > 999999999)
		{
			bef1 += 1;
			bef2 %= 1000000000;
		}
		printf("%lu%lu", bef1, bef2);
		if (count != 98)
			printf(", ");
		fib1_bef1 = fib2_bef1;
		fib1_bef2 = fib2_bef2;
		fib2_bef1 = bef1;
		fib2_bef2 = bef2;
	}
	printf("\n");
	return (0);
}
