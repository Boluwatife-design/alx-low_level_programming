#include "main.h"

/**
 * _isalpha-checks for alphabetic character
 * @c:Represents character
 * Return: Checks if c is a letter
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
