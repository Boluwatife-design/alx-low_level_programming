#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mult(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add-add te sum of two numbers
 * @a: first number
 * @b; second number
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub-subtract b from a
 * @a: first number
 * @b: second number
 * Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mult-multiply both numbers
 * @a: first number
 * @b: second number
 * Return: a multiplied by b
 */
int op_mult(int a, int b)
{
	return (a * b);
}
/**
 * op_div-division of both  numbers.
 * @a: The first number
 * @b: The second number
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod-gives the  remainder of the division of two numbers.
 * @a: The first number
 * @b: The second number
 * Return: The remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}

