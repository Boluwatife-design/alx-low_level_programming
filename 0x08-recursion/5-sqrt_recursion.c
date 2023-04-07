#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion-returns the natural square root of a number
 * @n: Represent the natural square root
 * Return: Natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion-To return the square root of a number
 * @n: Return the natural square root of a number
 * @i: iterator
 * Return: The result
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (1);

	return (actual_sqrt_recursion(n, i + 1));
}
