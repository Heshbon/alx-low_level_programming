#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns the sum of a and b
 * @a: the value
 * @b: the value
 * Return: the sums of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: the value to substract
 * @b: the value to substract
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: the value to multiply
 * @b: the value to multiply
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: the value to divide
 * @b: the value to divide from
 * Return: the division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a by b
 * @a: the value
 * @b: the value
 * Return: the reminder of the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
