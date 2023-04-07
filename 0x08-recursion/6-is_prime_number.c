#include "main.h"

/**
 * is_prime_number-returns 1 if integer is a prime number,else return 0
 * @n: Represent number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime-check if a number is prime
 * @n: Represent number
 * @i: iteration
 * Return: Result
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
