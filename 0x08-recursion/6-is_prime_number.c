#include "main.h"

int actual_prime(int n, int a);

/**
 * is_prime_number - a function that returns 1 if the input interger
 * @n: the value to evaluate
 * Return: 1 if n is prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n -1));
}


/**
 * actual_prime - determines the prime number repeatedly
 * @n: the number to calculate
 * @a: iterating value
 * Return: 1 if n is prime number, 0 if not
 */

int actual_prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (actual_prime(n, a - 1));
}
