#include "main.h"
#include <stdlib.h>

/**
 * *create_array-creates an array of chars
 * @c: Represent char c
 * @s: Int size
 * Returns: Null if size = 0 or fail
 */
char *create_array(unsigned int size, char c)
{
	char*str;

	unsigned int i;

	str = malloc(size of (char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0;i < size; i++)
		str[i] = c;

	return (str);
}
