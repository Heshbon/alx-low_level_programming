#include <stdio.h>

/**
 * main - prints the first fifty Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int bef1 = 1;
	unsigned long int bef2 = 2;
	unsigned long int after;
	int a;

	printf("%lu, ", bef1);
	for (a = 1 ; a < 50 ; a++)
	{
		printf("%lu", bef2);
		after = bef1 + bef2;
		bef1 = bef2;
		bef2 = bef1;
		if (a != 49)
			printf(", ");
	}
	printf("\n");
	return (0);

}
