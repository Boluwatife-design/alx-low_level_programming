#include "main.h"

/**
 *_puts_recursion-function_to_print();
 *@s:function that prints string followed by a new line
 *Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
