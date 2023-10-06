#include "hash_tables.h"

/**
 * key_index-function that gives you the index of a key
 * @key: represent key
 * @size: size of the array
 * Return: index of a key
 * Description: uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (has_djb2(key) % size);
}
