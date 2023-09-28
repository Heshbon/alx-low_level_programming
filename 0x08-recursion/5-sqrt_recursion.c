#include "main.h"

int actual_sqrt_recursion(int n, int j);
/**
 * _sqrt_recursion - a function that returns the natural square root
 * @n: calculate natural square root
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - determine the square root of natural number
 * @n: calcuate the squre root of the number
 * @j: itarating value
 * Return: the square root
 */

int actual_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (actual_sqrt_recursion(n, j + 1));
}
