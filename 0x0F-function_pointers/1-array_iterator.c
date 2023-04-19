#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator-function that executes a function
 * @size: size of the array
 * @action: pointer to the action
 * @array: array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
