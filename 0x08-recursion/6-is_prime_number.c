#include "main.h"

int actual_prime(int n, int j);

/**
 * is_prime_number - returns a prime number or not
 * @n: the value to calculate
 * Return: 1 if n is prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}


/**
 * actual_prime - determines the prime number repeatedly
 * @n: the number to calculate
 * @j: iterating value
 * Return: 1 if n is prime number, 0 if not
 */

int actual_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (actual_prime(n, j - 1));
}
