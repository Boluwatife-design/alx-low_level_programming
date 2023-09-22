#include "main.h"
#include <unistd.h>

/*
 * _putchar - writes character to stdout
 * @c: represent character
 * Return: output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
